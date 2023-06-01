#pragma once

#include <QThread>
#include <string>
#include "QRScanner.h"

class ThreadSacn  : public QThread
{
	Q_OBJECT

public:
	ThreadSacn(QObject *parent);
	~ThreadSacn();
	void setImg(cv::Mat img);
	void run();
	std::string uqrcode;
public slots:
private:
	cv::Mat img;
	QRScanner qs;
};