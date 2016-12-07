#ifndef INITIALIZER_1793_H
#define INITIALIZER_1793_H

#include <QObject>
#include <QProcess>
#include <QString>
#include <QTextCodec>
#include <QRegularExpression>
#include <QJsonDocument>
#include <QJsonObject>

#include "app_data/model_1793.h"
#include "logger_1793.h"

class Initializer_1793 : public QObject
{
    Q_OBJECT
public:
    explicit Initializer_1793(QObject *parent = 0);

    bool initializer_status;

public slots:
    void initialize();

private:
    bool check_packages();
    bool generate_main_view();
    void add_module_layouts();
    bool set_modules();

    static void new_module_layout(const QString &moduleName, const QString &fileName);

signals:
    void finish_initialization();

public slots:
};

#endif // INITIALIZER_1793_H
