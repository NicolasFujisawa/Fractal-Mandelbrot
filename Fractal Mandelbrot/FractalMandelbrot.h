#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_FractalMandelbrot.h"


class FractalMandelbrot : public QMainWindow
{
	Q_OBJECT

public:
	FractalMandelbrot(QWidget *parent = Q_NULLPTR);

private:
	Ui::FractalMandelbrotClass ui;
};
