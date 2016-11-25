#include "include/dummymodule.h"

DummyModule::DummyModule(QObject *parent) : QObject(parent)
{
    connect(Module_1793::qmlSignals, SIGNAL(signalDummy()), this, SLOT(qmlSignalHandler()));
}

void DummyModule::qmlSignalHandler()
{
    qDebug() << "Current thread:" << QThread::currentThread();
}
