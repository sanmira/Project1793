#include "include/model_1793.h"

Model_1793::Model_1793()
{

}

Model_1793::~Model_1793()
{
    delete (main_view);
    emit send_log_file(LogInfoMsg, "Модель уничтожена");
}

void Model_1793::start()
{
    main_view = new (QQmlApplicationEngine);
    main_view->load(QUrl(QStringLiteral("/home/san/Qt/Projects/Project1793/qml/main_view.qml")));

    emit send_log_file(LogInfoMsg, "Модель запущена");
}
