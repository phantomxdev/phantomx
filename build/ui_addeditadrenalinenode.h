/********************************************************************************
** Form generated from reading UI file 'addeditadrenalinenode.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDEDITADRENALINENODE_H
#define UI_ADDEDITADRENALINENODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddEditAdrenalineNode
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *aliasLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *addressLineEdit;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_Buttons;
    QSpacerItem *horizontalSpacer_1;
    QLabel *statusLabel;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *AddEditAdrenalineNode)
    {
        if (AddEditAdrenalineNode->objectName().isEmpty())
            AddEditAdrenalineNode->setObjectName(QStringLiteral("AddEditAdrenalineNode"));
        AddEditAdrenalineNode->resize(552, 279);
        AddEditAdrenalineNode->setModal(true);
        verticalLayout = new QVBoxLayout(AddEditAdrenalineNode);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 0, -1, 0);
        label_3 = new QLabel(AddEditAdrenalineNode);
        label_3->setObjectName(QStringLiteral("label_3"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setWordWrap(true);

        verticalLayout_2->addWidget(label_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, -1, 0);
        label = new QLabel(AddEditAdrenalineNode);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        aliasLineEdit = new QLineEdit(AddEditAdrenalineNode);
        aliasLineEdit->setObjectName(QStringLiteral("aliasLineEdit"));

        horizontalLayout->addWidget(aliasLineEdit);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, -1, 0);
        label_2 = new QLabel(AddEditAdrenalineNode);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        addressLineEdit = new QLineEdit(AddEditAdrenalineNode);
        addressLineEdit->setObjectName(QStringLiteral("addressLineEdit"));

        horizontalLayout_2->addWidget(addressLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, -1, -1, 0);

        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout->addLayout(verticalLayout_2);

        horizontalLayout_Buttons = new QHBoxLayout();
        horizontalLayout_Buttons->setObjectName(QStringLiteral("horizontalLayout_Buttons"));
        horizontalSpacer_1 = new QSpacerItem(40, 48, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_Buttons->addItem(horizontalSpacer_1);

        statusLabel = new QLabel(AddEditAdrenalineNode);
        statusLabel->setObjectName(QStringLiteral("statusLabel"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        statusLabel->setFont(font);
        statusLabel->setTextFormat(Qt::PlainText);
        statusLabel->setWordWrap(true);

        horizontalLayout_Buttons->addWidget(statusLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 48, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_Buttons->addItem(horizontalSpacer_2);

        okButton = new QPushButton(AddEditAdrenalineNode);
        okButton->setObjectName(QStringLiteral("okButton"));

        horizontalLayout_Buttons->addWidget(okButton);

        cancelButton = new QPushButton(AddEditAdrenalineNode);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setAutoDefault(false);

        horizontalLayout_Buttons->addWidget(cancelButton);


        verticalLayout->addLayout(horizontalLayout_Buttons);


        retranslateUi(AddEditAdrenalineNode);

        QMetaObject::connectSlotsByName(AddEditAdrenalineNode);
    } // setupUi

    void retranslateUi(QDialog *AddEditAdrenalineNode)
    {
        AddEditAdrenalineNode->setWindowTitle(QApplication::translate("AddEditAdrenalineNode", "Add/Edit phantomxNodes Node", nullptr));
        label_3->setText(QApplication::translate("AddEditAdrenalineNode", "<html><head/><body><p>Enter an Alias (friendly name) for your PhantomX Node and its address (either clearnet IP and port). The address should be in the format 123.456.789.123:9999 or example.com:9999. </p><p>A masternode private key and a collateral address will both be automatically generated for you. <span style=\" font-weight:600;\">You must send exactly 20000 PNX to the collateral address</span>.</p></body></html>", nullptr));
        label->setText(QApplication::translate("AddEditAdrenalineNode", "Alias", nullptr));
        label_2->setText(QApplication::translate("AddEditAdrenalineNode", "Address", nullptr));
        statusLabel->setText(QString());
        okButton->setText(QApplication::translate("AddEditAdrenalineNode", "&OK", nullptr));
        cancelButton->setText(QApplication::translate("AddEditAdrenalineNode", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddEditAdrenalineNode: public Ui_AddEditAdrenalineNode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDEDITADRENALINENODE_H
