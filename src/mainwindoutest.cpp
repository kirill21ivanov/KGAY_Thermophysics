#include "mainwindoutest.h"
#include "ui_mainwindoutest.h"

MainWindouTest::MainWindouTest(const QString &name, const QString &group, QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindouTest)
{
    ui->setupUi(this);
    this->ui->part_name->setText(name);
    names = name;
    groups = group;
    this->ui->part_group->setText(group);

    timer = new QTimer(this);
    timeRemaining = QTime(0, 20, 0);

    connect(timer, SIGNAL(timeout()), this, SLOT(updateTimerDisplay()));

    timer->start(1000);
}

void MainWindouTest::on_exit_clicked() {
    this->hide();
    a = new MainWindowFin(names, groups, userScore);
    a->setWindowState(Qt::WindowNoState);
    a->show();

}

MainWindouTest::~MainWindouTest()
{
    delete ui;
}

void MainWindouTest::updateTimerDisplay() {
    timeRemaining = timeRemaining.addSecs(-1);
    if (timeRemaining == QTime(0, 0)) {
        on_exit_clicked();
        timer->stop();
    }
    this->ui->timer->setText(timeRemaining.toString("mm:ss"));
}

void MainWindouTest::shuffleOptions(QString &option1, QString &option2, QString &option3) {
    QStringList optionsList;
    optionsList << option1 << option2 << option3;
    std::shuffle(optionsList.begin(), optionsList.end(), std::mt19937(std::random_device()()));
    option1 = optionsList[0];
    option2 = optionsList[1];
    option3 = optionsList[2];
}

void MainWindouTest::on_but_1_clicked() {
    if (!question1Answered) {
        ui->awin_1->setEnabled(true);
        ui->awin_2->setEnabled(true);
        ui->awin_3->setEnabled(true);
        this->ui->win_start->setText("Укажите, что рассматривает раздел «техническая термодинамика»:");
        QString option1 = "теоретические основы предмета и закономерности";
        QString option2 = "законы термодинамики применительно к процессам взаимного превращения ";
        QString option3 = "применение основных законов термодинамики к химическим процессам";
        QStringList options;
        options << option1 << option2 << option3;
        std::random_device rd;
        std::mt19937 g(rd());
        std::shuffle(options.begin(), options.end(), g);
        this->ui->awin_1->setText(options[0]);
        this->ui->awin_2->setText(options[1]);
        this->ui->awin_3->setText(options[2]);
        correctAnswer = option2;



        connect(ui->awin_1, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_2, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_3, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);


        question1Answered = false;
    }
}

void MainWindouTest::on_but_2_clicked() {
    if (!question2Answered) {
        ui->awin_1->setEnabled(true);
        ui->awin_2->setEnabled(true);
        ui->awin_3->setEnabled(true);

        this->ui->win_start->setText("Что называется открытой термодинамической системой?");

        QString option1 = "Система, которая обменивается с окружающей средой и веществом";
        QString option2 = "Система, которая обменивается с окружающей средой и теплотой";
        QString option3 = "Система, которая обменивается с окружающей средой  количеством движения";
        QStringList options;
        options << option1 << option2 << option3;
        std::random_device rd;
        std::mt19937 g(rd());
        std::shuffle(options.begin(), options.end(), g);
        this->ui->awin_1->setText(options[0]);
        this->ui->awin_2->setText(options[1]);
        this->ui->awin_3->setText(options[2]);
        correctAnswer = option2;
        connect(ui->awin_1, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_2, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_3, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);

        question2Answered = false;
    }
}

void MainWindouTest::on_but_3_clicked() {

    if (!question3Answered) {
        ui->awin_1->setEnabled(true);
        ui->awin_2->setEnabled(true);
        ui->awin_3->setEnabled(true);
        this->ui->win_start->setText("Что называется адиабатной термодинамической системой?");

        QString option1 = "Обменивается с окружающей средой веществом";
        QString option2 = "Не может обмениваться с окружающей средой теплотой";
        QString option3 = "Обменивается с окружающей средой теплотой";
        QStringList options;
        options << option1 << option2 << option3;
        std::random_device rd;
        std::mt19937 g(rd());
        std::shuffle(options.begin(), options.end(), g);
        this->ui->awin_1->setText(options[0]);
        this->ui->awin_2->setText(options[1]);
        this->ui->awin_3->setText(options[2]);
        correctAnswer = option2;
        connect(ui->awin_1, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_2, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_3, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        question3Answered = false;
    }
}
void MainWindouTest::on_but_4_clicked() {

    if (!question4Answered) {
        ui->awin_1->setEnabled(true);
        ui->awin_2->setEnabled(true);
        ui->awin_3->setEnabled(true);
        this->ui->win_start->setText("Обменивается с окружающей средой теплотой?");

        QString option1 = "совокупность материальных тел находящихся во взаимодействии друг с другом";
        QString option2 = "совокупность материальных тел находящихся во взаимодействии с окружающей ";
        QString option3 = "совокупность материальных тел, не взаимодействующих с окружающей средой";
        QStringList options;
        options << option1 << option2 << option3;
        std::random_device rd;
        std::mt19937 g(rd());
        std::shuffle(options.begin(), options.end(), g);
        this->ui->awin_1->setText(options[0]);
        this->ui->awin_2->setText(options[1]);
        this->ui->awin_3->setText(options[2]);
        correctAnswer = option2;
        connect(ui->awin_1, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_2, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_3, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        question4Answered = false;
    }
}
void MainWindouTest::on_but_5_clicked() {

    if (!question5Answered) {
        ui->awin_1->setEnabled(true);
        ui->awin_2->setEnabled(true);
        ui->awin_3->setEnabled(true);
        this->ui->win_start->setText("Укажите, какие физические величины являются  основными термодинамическими параметрами состояния ");

        QString option1 = "абсолютное давление, удельный объем, плотность";
        QString option2 = "абсолютная температура, абсолютное давление, удельный объем";
        QString option3 = "абсолютная температура, абсолютное давление, плотность";
        QStringList options;
        options << option1 << option2 << option3;
        std::random_device rd;
        std::mt19937 g(rd());
        std::shuffle(options.begin(), options.end(), g);
        this->ui->awin_1->setText(options[0]);
        this->ui->awin_2->setText(options[1]);
        this->ui->awin_3->setText(options[2]);
        correctAnswer = option2;
        connect(ui->awin_1, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_2, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_3, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        question5Answered = false;
    }
}
void MainWindouTest::on_but_6_clicked() {

    if (!question6Answered) {
        ui->awin_1->setEnabled(true);
        ui->awin_2->setEnabled(true);
        ui->awin_3->setEnabled(true);
        this->ui->win_start->setText("Физический смысл термодинамической равновесной системы ");

        QString option1 = "состояние термодинамической системы меняется в течение времени";
        QString option2 = "все термодинамические параметры постоянны во времени и одинаковы во всех точках системы";
        QString option3 = "состояние термодинамической системы меняется в течение лишь некоторого времени";
        QStringList options;
        options << option1 << option2 << option3;
        std::random_device rd;
        std::mt19937 g(rd());
        std::shuffle(options.begin(), options.end(), g);
        this->ui->awin_1->setText(options[0]);
        this->ui->awin_2->setText(options[1]);
        this->ui->awin_3->setText(options[2]);
        correctAnswer = option2;
        connect(ui->awin_1, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_2, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_3, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        question6Answered = false;
    }
}
void MainWindouTest::on_but_7_clicked() {

    if (!question7Answered) {
        ui->awin_1->setEnabled(true);
        ui->awin_2->setEnabled(true);
        ui->awin_3->setEnabled(true);
        this->ui->win_start->setText("Какой вид теплопередачи сопровождается переносом вещества");

        QString option1 = "Теплопроводность";
        QString option2 = "конвекция";
        QString option3 = "излучение";
        QStringList options;
        options << option1 << option2 << option3;
        std::random_device rd;
        std::mt19937 g(rd());
        std::shuffle(options.begin(), options.end(), g);
        this->ui->awin_1->setText(options[0]);
        this->ui->awin_2->setText(options[1]);
        this->ui->awin_3->setText(options[2]);
        correctAnswer = option2;
        connect(ui->awin_1, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_2, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_3, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        question7Answered = false;
    }
}
void MainWindouTest::on_but_8_clicked() {

    if (!question8Answered) {
        ui->awin_1->setEnabled(true);
        ui->awin_2->setEnabled(true);
        ui->awin_3->setEnabled(true);
        this->ui->win_start->setText("Одна колба покрыта копотью, другая побелена известью. Они наполнены горячей водой одинаковой температуры. В какой колбе быстрее остынет вода");

        QString option1 = "в побеленной колбе";
        QString option2 = "в закопченной колбе ";
        QString option3 = "в обеих колбах температура воды будет понижаться одинаково";
        QStringList options;
        options << option1 << option2 << option3;
        std::random_device rd;
        std::mt19937 g(rd());
        std::shuffle(options.begin(), options.end(), g);
        this->ui->awin_1->setText(options[0]);
        this->ui->awin_2->setText(options[1]);
        this->ui->awin_3->setText(options[2]);
        correctAnswer = option2;
        connect(ui->awin_1, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_2, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_3, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        question8Answered = false;
    }
}
void MainWindouTest::on_but_9_clicked() {

    if (!question9Answered) {
        ui->awin_1->setEnabled(true);
        ui->awin_2->setEnabled(true);
        ui->awin_3->setEnabled(true);
        this->ui->win_start->setText("Когда белье на открытом балконе высохнет быстрее?");

        QString option1 = "в безветреный день ";
        QString option2 = "в ветреный день ";
        QString option3 = "во время дождя";
        QStringList options;
        options << option1 << option2 << option3;
        std::random_device rd;
        std::mt19937 g(rd());
        std::shuffle(options.begin(), options.end(), g);
        this->ui->awin_1->setText(options[0]);
        this->ui->awin_2->setText(options[1]);
        this->ui->awin_3->setText(options[2]);
        correctAnswer = option2;
        connect(ui->awin_1, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_2, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_3, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        question9Answered = false;
    }
}
void MainWindouTest::on_but_10_clicked() {

    if (!question10Answered) {
        ui->awin_1->setEnabled(true);
        ui->awin_2->setEnabled(true);
        ui->awin_3->setEnabled(true);
        this->ui->win_start->setText("В каком из перечисленных тел теплопередача происходит главным образом путем теплопроводности");

        QString option1 = "Воздух";
        QString option2 = "Кирпич";
        QString option3 = "Вода";
        QStringList options;
        options << option1 << option2 << option3;
        std::random_device rd;
        std::mt19937 g(rd());
        std::shuffle(options.begin(), options.end(), g);
        this->ui->awin_1->setText(options[0]);
        this->ui->awin_2->setText(options[1]);
        this->ui->awin_3->setText(options[2]);
        correctAnswer = option2;
        connect(ui->awin_1, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_2, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_3, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        question10Answered = false;
    }
}
void MainWindouTest::on_but_11_clicked() {

    if (!question11Answered) {
        ui->awin_1->setEnabled(true);
        ui->awin_2->setEnabled(true);
        ui->awin_3->setEnabled(true);
        this->ui->win_start->setText("Конвекцией называется процесс: ");

        QString option1 = "проникновения в результате теплового движения атомов одного тела в промежутки между атомами другого тела";
        QString option2 = "переноса  теплоты потоками вещества ";
        QString option3 = "испускания и поглощения теплового электромагнитного излучения без непосредственного контакта между телами";
        QStringList options;
        options << option1 << option2 << option3;
        std::random_device rd;
        std::mt19937 g(rd());
        std::shuffle(options.begin(), options.end(), g);
        this->ui->awin_1->setText(options[0]);
        this->ui->awin_2->setText(options[1]);
        this->ui->awin_3->setText(options[2]);
        correctAnswer = option2;
        connect(ui->awin_1, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_2, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_3, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        question11Answered = false;
    }
}
void MainWindouTest::on_but_12_clicked() {

    if (!question12Answered) {
        ui->awin_1->setEnabled(true);
        ui->awin_2->setEnabled(true);
        ui->awin_3->setEnabled(true);
        this->ui->win_start->setText("Какое вещество имеет наименьшую теплопроводность?");

        QString option1 = "алюминий";
        QString option2 = "воздух";
        QString option3 = "свинец";
        QStringList options;
        options << option1 << option2 << option3;
        std::random_device rd;
        std::mt19937 g(rd());
        std::shuffle(options.begin(), options.end(), g);
        this->ui->awin_1->setText(options[0]);
        this->ui->awin_2->setText(options[1]);
        this->ui->awin_3->setText(options[2]);
        correctAnswer = option2;
        connect(ui->awin_1, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_2, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_3, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        question12Answered = false;
    }
}
void MainWindouTest::on_but_13_clicked() {

    if (!question13Answered) {
        ui->awin_1->setEnabled(true);
        ui->awin_2->setEnabled(true);
        ui->awin_3->setEnabled(true);
        this->ui->win_start->setText("В стоящем на горящей газовой горелке чайнике закипает вода. Какой из перечисленных ниже процессов вносит наименьший вклад в процесс закипания:");

        QString option1 = "теплопроводность ";
        QString option2 = "диффузия";
        QString option3 = "конвекция слоев воды внутри чайника";
        QStringList options;
        options << option1 << option2 << option3;
        std::random_device rd;
        std::mt19937 g(rd());
        std::shuffle(options.begin(), options.end(), g);
        this->ui->awin_1->setText(options[0]);
        this->ui->awin_2->setText(options[1]);
        this->ui->awin_3->setText(options[2]);
        correctAnswer = option2;
        connect(ui->awin_1, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_2, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_3, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        question13Answered = false;
    }
}
void MainWindouTest::on_but_14_clicked() {

    if (!question14Answered) {
        ui->awin_1->setEnabled(true);
        ui->awin_2->setEnabled(true);
        ui->awin_3->setEnabled(true);
        this->ui->win_start->setText("Какое вещество имеет наименьшую теплопроводность");

        QString option1 = " свинец";
        QString option2 = " мех";
        QString option3 = " алюминий";
        QStringList options;
        options << option1 << option2 << option3;
        std::random_device rd;
        std::mt19937 g(rd());
        std::shuffle(options.begin(), options.end(), g);
        this->ui->awin_1->setText(options[0]);
        this->ui->awin_2->setText(options[1]);
        this->ui->awin_3->setText(options[2]);
        correctAnswer = option2;
        connect(ui->awin_1, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_2, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_3, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        question14Answered = false;
    }
}
void MainWindouTest::on_but_15_clicked() {
    if (!question15Answered) {
        ui->awin_1->setEnabled(true);
        ui->awin_2->setEnabled(true);
        ui->awin_3->setEnabled(true);
        this->ui->win_start->setText("Выберите один из видов теплопередачи");
        QString option1 = "теплопроводимость";
        QString option2 = "теплопроводность";
        QString option3 = "теплостойкость";
        QStringList options;
        options << option1 << option2 << option3;
        std::random_device rd;
        std::mt19937 g(rd());
        std::shuffle(options.begin(), options.end(), g);
        this->ui->awin_1->setText(options[0]);
        this->ui->awin_2->setText(options[1]);
        this->ui->awin_3->setText(options[2]);
        correctAnswer = option2;
        connect(ui->awin_1, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_2, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_3, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        question15Answered = false;
    }
}
void MainWindouTest::on_but_16_clicked() {

    if (!question16Answered) {
        ui->awin_1->setEnabled(true);
        ui->awin_2->setEnabled(true);
        ui->awin_3->setEnabled(true);
        this->ui->win_start->setText("Какое вещество имеет наибольшую теплопроводность?");

        QString option1 = "воздух;";
        QString option2 = "алюминий;";
        QString option3 = "мех;";
        QStringList options;
        options << option1 << option2 << option3;
        std::random_device rd;
        std::mt19937 g(rd());
        std::shuffle(options.begin(), options.end(), g);
        this->ui->awin_1->setText(options[0]);
        this->ui->awin_2->setText(options[1]);
        this->ui->awin_3->setText(options[2]);
        correctAnswer = option2;
        connect(ui->awin_1, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_2, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_3, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        question16Answered = false;
    }
}
void MainWindouTest::on_but_17_clicked() {

    if (!question17Answered) {
        ui->awin_1->setEnabled(true);
        ui->awin_2->setEnabled(true);
        ui->awin_3->setEnabled(true);
        this->ui->win_start->setText("Один из видов теплопередачи");

        QString option1 = "тепличное излучение";
        QString option2 = "тепловое излучение ";
        QString option3 = "теплопроводимость";
        QStringList options;
        options << option1 << option2 << option3;
        std::random_device rd;
        std::mt19937 g(rd());
        std::shuffle(options.begin(), options.end(), g);
        this->ui->awin_1->setText(options[0]);
        this->ui->awin_2->setText(options[1]);
        this->ui->awin_3->setText(options[2]);
        correctAnswer = option2;
        connect(ui->awin_1, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_2, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_3, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        question17Answered = false;
    }
}
void MainWindouTest::on_but_18_clicked() {

    if (!question18Answered) {
        ui->awin_1->setEnabled(true);
        ui->awin_2->setEnabled(true);
        ui->awin_3->setEnabled(true);
        this->ui->win_start->setText("На каком из способов теплопередачи основано нагревание твердых тел");

        QString option1 = "Излучение";
        QString option2 = "Теплопроводность ";
        QString option3 = "Конвекция";
        QStringList options;
        options << option1 << option2 << option3;
        std::random_device rd;
        std::mt19937 g(rd());
        std::shuffle(options.begin(), options.end(), g);
        this->ui->awin_1->setText(options[0]);
        this->ui->awin_2->setText(options[1]);
        this->ui->awin_3->setText(options[2]);
        correctAnswer = option2;
        connect(ui->awin_1, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_2, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_3, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        question18Answered = false;
    }
}
void MainWindouTest::on_but_19_clicked() {

    if (!question19Answered) {
        ui->awin_1->setEnabled(true);
        ui->awin_2->setEnabled(true);
        ui->awin_3->setEnabled(true);
        this->ui->win_start->setText("Укажите формулировку, которая относится к первому закону термодинамики");

        QString option1 = "теплота не может полностью превращаться в механическую энергию, а механическая энергия в теплоту - может";
        QString option2 = "энергия не исчезает и не возникает вновь, она лишь переходит из одного вида в другой";
        QString option3 = "внутренняя энергия не зависит от вида термодинамического процесса";
        QStringList options;
        options << option1 << option2 << option3;
        std::random_device rd;
        std::mt19937 g(rd());
        std::shuffle(options.begin(), options.end(), g);
        this->ui->awin_1->setText(options[0]);
        this->ui->awin_2->setText(options[1]);
        this->ui->awin_3->setText(options[2]);
        correctAnswer = option2;
        connect(ui->awin_1, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_2, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_3, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        question19Answered = false;
    }
}
void MainWindouTest::on_but_20_clicked() {

    if (!question20Answered) {
        ui->awin_1->setEnabled(true);
        ui->awin_2->setEnabled(true);
        ui->awin_3->setEnabled(true);
        this->ui->win_start->setText("Укажите единицу измерения величины, измеряемой произведением pΔV");

        QString option1 = "Паскаль";
        QString option2 = "Джоуль";
        QString option3 = "Ватт";
        QStringList options;
        options << option1 << option2 << option3;
        std::random_device rd;
        std::mt19937 g(rd());
        std::shuffle(options.begin(), options.end(), g);
        this->ui->awin_1->setText(options[0]);
        this->ui->awin_2->setText(options[1]);
        this->ui->awin_3->setText(options[2]);
        correctAnswer = option2;
        connect(ui->awin_1, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_2, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_3, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        question20Answered = false;
    }
}

void MainWindouTest::checkAnswer() {
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());
    QString selectedAnswer = clickedButton->text();
    if (clickedButton) {
        if (selectedAnswer == "теоретические основы предмета и закономерности" || selectedAnswer == "законы термодинамики применительно к процессам взаимного превращения " || selectedAnswer == "применение основных законов термодинамики к химическим процессам") {
            ui->but_1->setEnabled(false);
            ui->awin_1->setEnabled(false);
            ui->awin_2->setEnabled(false);
            ui->awin_3->setEnabled(false);
            ui->but_1->setStyleSheet("background-color: gray; border-radius: 10px;");
            if (selectedAnswer == correctAnswer) {
                question1Answered = true;
                if(question1 == false){
                    userScore += 1;
                }
                question1 = true;
                qDebug() << "Начислен балл 1";
            } else {

            }
        } else if (selectedAnswer == "Система, которая обменивается с окружающей средой и веществом" || selectedAnswer == "Система, которая обменивается с окружающей средой и теплотой" || selectedAnswer == "Система, которая обменивается с окружающей средой  количеством движения") {
            ui->but_2->setEnabled(false);
            ui->awin_1->setEnabled(false);
            ui->awin_2->setEnabled(false);
            ui->awin_3->setEnabled(false);
            ui->but_2->setStyleSheet("background-color: gray; border-radius: 10px;");
            if (selectedAnswer == correctAnswer) {
                question2Answered = true;
                if(question2 == false){
                    userScore += 1;
                }
                question2 = true;
                qDebug() << "Начислен балл 2";
            } else {

            }
        } else if (selectedAnswer == "Обменивается с окружающей средой веществом" || selectedAnswer == "Не может обмениваться с окружающей средой теплотой" || selectedAnswer == "Обменивается с окружающей средой теплотой") {
            ui->but_3->setEnabled(false);
            ui->awin_1->setEnabled(false);
            ui->awin_2->setEnabled(false);
            ui->awin_3->setEnabled(false);
            ui->but_3->setStyleSheet("background-color: gray; border-radius: 10px;");
            if (selectedAnswer == correctAnswer) {
                question3Answered = true;
                if(question3 == false){
                    userScore += 1;
                }
                question3 = true;
                qDebug() << "Начислен балл 3";
            } else {

            }
        }else if (selectedAnswer == "совокупность материальных тел находящихся во взаимодействии друг с другом" || selectedAnswer == "совокупность материальных тел находящихся во взаимодействии с окружающей " || selectedAnswer == "совокупность материальных тел, не взаимодействующих с окружающей средой") {
            ui->but_4->setEnabled(false);
            ui->awin_1->setEnabled(false);
            ui->awin_2->setEnabled(false);
            ui->awin_3->setEnabled(false);
            ui->but_4->setStyleSheet("background-color: gray; border-radius: 10px;");
            if (selectedAnswer == correctAnswer) {
                question4Answered = true;
                if(question4 == false){
                    userScore += 1;
                }
                question4 = true;
                qDebug() << "Начислен балл 4";
            } else {

            }
        }else if (selectedAnswer == "абсолютное давление, удельный объем, плотность" || selectedAnswer == "абсолютная температура, абсолютное давление, удельный объем" || selectedAnswer == "абсолютная температура, абсолютное давление, плотность") {
            ui->but_5->setEnabled(false);
            ui->awin_1->setEnabled(false);
            ui->awin_2->setEnabled(false);
            ui->awin_3->setEnabled(false);
            ui->but_5->setStyleSheet("background-color: gray; border-radius: 10px;");
            if (selectedAnswer == correctAnswer) {
                question5Answered = true;
                if(question5 == false){
                    userScore += 1;
                }
                question5 = true;
                qDebug() << "Начислен балл 5";
            } else {

            }
        }else if (selectedAnswer == "состояние термодинамической системы меняется в течение времени" || selectedAnswer == "все термодинамические параметры постоянны во времени и одинаковы во всех точках системы" || selectedAnswer == "гсостояние термодинамической системы меняется в течение лишь некоторого времени") {
            ui->but_6->setEnabled(false);
            ui->awin_1->setEnabled(false);
            ui->awin_2->setEnabled(false);
            ui->awin_3->setEnabled(false);
            ui->but_6->setStyleSheet("background-color: gray; border-radius: 10px;");
            if (selectedAnswer == correctAnswer) {
                question6Answered = true;
                if(question6 == false){
                    userScore += 1;
                }
                question6 = true;
                qDebug() << "Начислен балл 6";
            } else {

            }
        }else if (selectedAnswer == "Теплопроводность" || selectedAnswer == "конвекция" || selectedAnswer == "излучение") {
            ui->but_7->setEnabled(false);
            ui->awin_1->setEnabled(false);
            ui->awin_2->setEnabled(false);
            ui->awin_3->setEnabled(false);
            ui->but_7->setStyleSheet("background-color: gray; border-radius: 10px;");
            if (selectedAnswer == correctAnswer) {
                question7Answered = true;
                if(question7 == false){
                    userScore += 1;
                }
                question7 = true;
                qDebug() << "Начислен балл 7";
            } else {

            }
        }else if (selectedAnswer == "в побеленной колбе" || selectedAnswer == "в закопченной колбе " || selectedAnswer == "в обеих колбах температура воды будет понижаться одинаково") {
            ui->but_8->setEnabled(false);
            ui->awin_1->setEnabled(false);
            ui->awin_2->setEnabled(false);
            ui->awin_3->setEnabled(false);
            ui->but_8->setStyleSheet("background-color: gray; border-radius: 10px;");
            if (selectedAnswer == correctAnswer) {
                question8Answered = true;
                if(question8 == false){
                    userScore += 1;
                }
                question8 = true;
                qDebug() << "Начислен балл 8";
            } else {

            }
        }else if (selectedAnswer == "в безветреный день " || selectedAnswer == "в ветреный день " || selectedAnswer == "во время дождя") {
            ui->but_9->setEnabled(false);
            ui->awin_1->setEnabled(false);
            ui->awin_2->setEnabled(false);
            ui->awin_3->setEnabled(false);
            ui->but_9->setStyleSheet("background-color: gray; border-radius: 10px;");
            if (selectedAnswer == correctAnswer) {
                question9Answered = true;
                if(question9 == false){
                    userScore += 1;
                }
                question9 = true;
                qDebug() << "Начислен балл 9";
            } else {

            }
        }else if (selectedAnswer == "Воздух" || selectedAnswer == "Кирпич" || selectedAnswer == "Вода") {
            ui->but_10->setEnabled(false);
            ui->awin_1->setEnabled(false);
            ui->awin_2->setEnabled(false);
            ui->awin_3->setEnabled(false);
            ui->but_10->setStyleSheet("background-color: gray; border-radius: 10px;");
            if (selectedAnswer == correctAnswer) {
                question10Answered = true;
                if(question10 == false){
                    userScore += 1;
                }
                question10 = true;
                qDebug() << "Начислен балл 10";
            } else {

            }
        }else if (selectedAnswer == "проникновения в результате теплового движения атомов одного тела в промежутки между атомами другого тела" || selectedAnswer == "переноса  теплоты потоками вещества " || selectedAnswer == "испускания и поглощения теплового электромагнитного излучения без непосредственного контакта между телами") {
            ui->but_11->setEnabled(false);
            ui->awin_1->setEnabled(false);
            ui->awin_2->setEnabled(false);
            ui->awin_3->setEnabled(false);
            ui->but_11->setStyleSheet("background-color: gray; border-radius: 10px;");
            if (selectedAnswer == correctAnswer) {
                question11Answered = true;
                if(question11 == false){
                    userScore += 1;
                }
                question11 = true;
                qDebug() << "Начислен балл 11";
            } else {

            }
        }else if (selectedAnswer == "алюминий" || selectedAnswer == "воздух" || selectedAnswer == "свинец") {
            ui->but_12->setEnabled(false);
            ui->awin_1->setEnabled(false);
            ui->awin_2->setEnabled(false);
            ui->awin_3->setEnabled(false);
            ui->but_12->setStyleSheet("background-color: gray; border-radius: 10px;");
            if (selectedAnswer == correctAnswer) {
                question12Answered = true;
                if(question12 == false){
                    userScore += 1;
                }
                question12 = true;
                qDebug() << "Начислен балл 12";
            } else {

            }
        }else if (selectedAnswer == "теплопроводность " || selectedAnswer == "диффузия" || selectedAnswer == "оконвекция слоев воды внутри чайника") {
            ui->but_13->setEnabled(false);
            ui->awin_1->setEnabled(false);
            ui->awin_2->setEnabled(false);
            ui->awin_3->setEnabled(false);
            ui->but_13->setStyleSheet("background-color: gray; border-radius: 10px;");
            if (selectedAnswer == correctAnswer) {
                question13Answered = true;
                if(question13 == false){
                    userScore += 1;
                }
                question13 = true;
                qDebug() << "Начислен балл 13";
            } else {

            }
        }else if (selectedAnswer == " свинец" || selectedAnswer == " мех" || selectedAnswer == " алюминий") {
            ui->but_14->setEnabled(false);
            ui->awin_1->setEnabled(false);
            ui->awin_2->setEnabled(false);
            ui->awin_3->setEnabled(false);
            ui->but_14->setStyleSheet("background-color: gray; border-radius: 10px;");
            if (selectedAnswer == correctAnswer) {
                question14Answered = true;
                if(question14 == false){
                    userScore += 1;
                }
                question14 = true;
                qDebug() << "Начислен балл 14";
            } else {

            }
        }else if (selectedAnswer == "теплопроводимость" || selectedAnswer == "теплопроводность" || selectedAnswer == "теплостойкость") {
            ui->but_15->setEnabled(false);
            ui->awin_1->setEnabled(false);
            ui->awin_2->setEnabled(false);
            ui->awin_3->setEnabled(false);
            ui->but_15->setStyleSheet("background-color: gray; border-radius: 10px;");
            if (selectedAnswer == correctAnswer) {
                question15Answered = true;
                if(question15 == false){
                    userScore += 1;
                }
                question15 = true;
                qDebug() << "Начислен балл 15";
            } else {

            }
        }else if (selectedAnswer == "воздух;" || selectedAnswer == "алюминий;" || selectedAnswer == "мех;") {
            ui->but_16->setEnabled(false);
            ui->awin_1->setEnabled(false);
            ui->awin_2->setEnabled(false);
            ui->awin_3->setEnabled(false);
            ui->but_16->setStyleSheet("background-color: gray; border-radius: 10px;");
            if (selectedAnswer == correctAnswer) {
                question16Answered = true;
                if(question16 == false){
                    userScore += 1;
                }
                question16 = true;
                qDebug() << "Начислен балл 16";
            } else {

            }
        }else if (selectedAnswer == "тепличное излучение" || selectedAnswer == "тепловое излучение " || selectedAnswer == "теплопроводимость") {
            ui->but_17->setEnabled(false);
            ui->awin_1->setEnabled(false);
            ui->awin_2->setEnabled(false);
            ui->awin_3->setEnabled(false);
            ui->but_17->setStyleSheet("background-color: gray; border-radius: 10px;");
            if (selectedAnswer == correctAnswer) {
                question17Answered = true;
                if(question17 == false){
                    userScore += 1;
                }
                question17 = true;
                qDebug() << "Начислен балл 17";
            } else {

            }
        }else if (selectedAnswer == "Излучение" || selectedAnswer == "Теплопроводность " || selectedAnswer == "Конвекция") {
            ui->but_18->setEnabled(false);
            ui->awin_1->setEnabled(false);
            ui->awin_2->setEnabled(false);
            ui->awin_3->setEnabled(false);
            ui->but_18->setStyleSheet("background-color: gray; border-radius: 10px;");
            if (selectedAnswer == correctAnswer) {
                question18Answered = true;
                if(question18 == false){
                    userScore += 1;
                }
                question18 = true;
                qDebug() << "Начислен балл 18";
            } else {

            }
        }else if (selectedAnswer == "теплота не может полностью превращаться в механическую энергию, а механическая энергия в теплоту - может" || selectedAnswer == "энергия не исчезает и не возникает вновь, она лишь переходит из одного вида в другой" || selectedAnswer == "внутренняя энергия не зависит от вида термодинамического процесса") {
            ui->but_19->setEnabled(false);
            ui->awin_1->setEnabled(false);
            ui->awin_2->setEnabled(false);
            ui->awin_3->setEnabled(false);
            ui->but_19->setStyleSheet("background-color: gray; border-radius: 10px;");
            if (selectedAnswer == correctAnswer) {
                question19Answered = true;
                if(question19 == false){
                    userScore += 1;
                }
                question19 = true;
                qDebug() << "Начислен балл 19";
            } else {

            }
        }else if (selectedAnswer == "Паскаль" || selectedAnswer == "Джоуль" || selectedAnswer == "Ватт") {
            ui->but_20->setEnabled(false);
            ui->awin_1->setEnabled(false);
            ui->awin_2->setEnabled(false);
            ui->awin_3->setEnabled(false);
            ui->but_20->setStyleSheet("background-color: gray; border-radius: 10px;");
            if (selectedAnswer == correctAnswer) {
                question20Answered = true;
                if(question20 == false){
                    userScore += 1;
                }
                question20 = true;
                qDebug() << "Начислен балл 20";
            } else {

            }
        }

        if (question1Answered && question2Answered && question3Answered) {
            qDebug() << "Итог тестирвования: " << userScore;
        }
    }
}

