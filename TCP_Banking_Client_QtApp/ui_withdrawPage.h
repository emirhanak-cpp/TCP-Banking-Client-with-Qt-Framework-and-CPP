/********************************************************************************
** Form generated from reading UI file 'withdrawPage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WITHDRAWPAGE_H
#define UI_WITHDRAWPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_withdrawPageClass
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *transferIbanLineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLineEdit *transferNameLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *transferAmountLineEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QLabel *transferBankLabel;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *moneySendPushButton;
    QPushButton *cancelPushButton;
    QLabel *statusLabel;

    void setupUi(QWidget *withdrawPageClass)
    {
        if (withdrawPageClass->objectName().isEmpty())
            withdrawPageClass->setObjectName("withdrawPageClass");
        withdrawPageClass->resize(450, 247);
        gridLayout = new QGridLayout(withdrawPageClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(withdrawPageClass);
        label_2->setObjectName("label_2");
        QFont font;
        font.setFamilies({QString::fromUtf8("Gill Sans MT")});
        font.setPointSize(15);
        font.setBold(false);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout->addWidget(label_2);

        transferIbanLineEdit = new QLineEdit(withdrawPageClass);
        transferIbanLineEdit->setObjectName("transferIbanLineEdit");
        transferIbanLineEdit->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(transferIbanLineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_5 = new QLabel(withdrawPageClass);
        label_5->setObjectName("label_5");
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_5->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_3->addWidget(label_5);

        transferNameLineEdit = new QLineEdit(withdrawPageClass);
        transferNameLineEdit->setObjectName("transferNameLineEdit");
        transferNameLineEdit->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_3->addWidget(transferNameLineEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(withdrawPageClass);
        label_3->setObjectName("label_3");
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_3->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_2->addWidget(label_3);

        transferAmountLineEdit = new QLineEdit(withdrawPageClass);
        transferAmountLineEdit->setObjectName("transferAmountLineEdit");
        transferAmountLineEdit->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(transferAmountLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_6 = new QLabel(withdrawPageClass);
        label_6->setObjectName("label_6");
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_6->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_4->addWidget(label_6);

        transferBankLabel = new QLabel(withdrawPageClass);
        transferBankLabel->setObjectName("transferBankLabel");
        transferBankLabel->setFont(font);
        transferBankLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        transferBankLabel->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_4->addWidget(transferBankLabel);


        verticalLayout_2->addLayout(horizontalLayout_4);

        label_7 = new QLabel(withdrawPageClass);
        label_7->setObjectName("label_7");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Gill Sans MT")});
        font1.setPointSize(12);
        font1.setBold(false);
        label_7->setFont(font1);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_7->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout_2->addWidget(label_7);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        moneySendPushButton = new QPushButton(withdrawPageClass);
        moneySendPushButton->setObjectName("moneySendPushButton");
        moneySendPushButton->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_5->addWidget(moneySendPushButton);

        cancelPushButton = new QPushButton(withdrawPageClass);
        cancelPushButton->setObjectName("cancelPushButton");
        cancelPushButton->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_5->addWidget(cancelPushButton);


        verticalLayout_2->addLayout(horizontalLayout_5);

        statusLabel = new QLabel(withdrawPageClass);
        statusLabel->setObjectName("statusLabel");
        statusLabel->setFont(font1);
        statusLabel->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        statusLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        statusLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(statusLabel);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);


        retranslateUi(withdrawPageClass);

        QMetaObject::connectSlotsByName(withdrawPageClass);
    } // setupUi

    void retranslateUi(QWidget *withdrawPageClass)
    {
        withdrawPageClass->setWindowTitle(QCoreApplication::translate("withdrawPageClass", "withdrawPage", nullptr));
        label_2->setText(QCoreApplication::translate("withdrawPageClass", "IBAN:", nullptr));
        label_5->setText(QCoreApplication::translate("withdrawPageClass", "Ad\304\261 / Soyad\304\261:", nullptr));
        label_3->setText(QCoreApplication::translate("withdrawPageClass", "Transfer Edilecek Miktar:", nullptr));
        label_6->setText(QCoreApplication::translate("withdrawPageClass", "Transfer Edilecek Ki\305\237inin Bankas\304\261:", nullptr));
        transferBankLabel->setText(QCoreApplication::translate("withdrawPageClass", "-", nullptr));
        label_7->setText(QCoreApplication::translate("withdrawPageClass", "UYARI: Yabanc\304\261 bankalara %10 transfer \303\274creti al\304\261n\304\261r.", nullptr));
        moneySendPushButton->setText(QCoreApplication::translate("withdrawPageClass", "G\303\266nder", nullptr));
        cancelPushButton->setText(QCoreApplication::translate("withdrawPageClass", "\304\260ptal", nullptr));
        statusLabel->setText(QCoreApplication::translate("withdrawPageClass", "status", nullptr));
    } // retranslateUi

};

namespace Ui {
    class withdrawPageClass: public Ui_withdrawPageClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WITHDRAWPAGE_H