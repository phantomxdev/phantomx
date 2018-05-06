/********************************************************************************
** Form generated from reading UI file 'masternodemanager.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MASTERNODEMANAGER_H
#define UI_MASTERNODEMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MasternodeManager
{
public:
    QVBoxLayout *topLayout;
    QVBoxLayout *verticalLayout;
    QTabWidget *btnMNUpdateList;
    QWidget *tab;
    QGridLayout *gridLayout;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *updateMNListButton;
    QLabel *label_2;
    QLabel *countLabel;
    QSpacerItem *horizontalSpacer_3;
    QWidget *tab_2;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *createButton;
    QPushButton *copyAddressButton;
    QSpacerItem *horizontalSpacer;
    QTableWidget *tableWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *editButton;
    QPushButton *getConfigButton;
    QPushButton *removeButton;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *startButton;
    QPushButton *stopButton;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *startAllButton;
    QPushButton *stopAllButton;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QWidget *MasternodeManager)
    {
        if (MasternodeManager->objectName().isEmpty())
            MasternodeManager->setObjectName(QStringLiteral("MasternodeManager"));
        MasternodeManager->resize(723, 457);
        topLayout = new QVBoxLayout(MasternodeManager);
        topLayout->setObjectName(QStringLiteral("topLayout"));
        topLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 0);
        btnMNUpdateList = new QTabWidget(MasternodeManager);
        btnMNUpdateList->setObjectName(QStringLiteral("btnMNUpdateList"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableWidget = new QTableWidget(tab);
        if (tableWidget->columnCount() < 6)
            tableWidget->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setAlternatingRowColors(true);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->horizontalHeader()->setStretchLastSection(true);

        gridLayout->addWidget(tableWidget, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, -1, -1, 0);
        updateMNListButton = new QPushButton(tab);
        updateMNListButton->setObjectName(QStringLiteral("updateMNListButton"));

        horizontalLayout_3->addWidget(updateMNListButton);

        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        countLabel = new QLabel(tab);
        countLabel->setObjectName(QStringLiteral("countLabel"));

        horizontalLayout_3->addWidget(countLabel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        btnMNUpdateList->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_2 = new QGridLayout(tab_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, -1, -1, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        createButton = new QPushButton(tab_2);
        createButton->setObjectName(QStringLiteral("createButton"));

        horizontalLayout->addWidget(createButton);

        copyAddressButton = new QPushButton(tab_2);
        copyAddressButton->setObjectName(QStringLiteral("copyAddressButton"));

        horizontalLayout->addWidget(copyAddressButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        tableWidget_2 = new QTableWidget(tab_2);
        if (tableWidget_2->columnCount() < 4)
            tableWidget_2->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem9);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_2->setAlternatingRowColors(true);
        tableWidget_2->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_2->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget_2->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_2->addWidget(tableWidget_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, -1, 0);
        editButton = new QPushButton(tab_2);
        editButton->setObjectName(QStringLiteral("editButton"));

        horizontalLayout_2->addWidget(editButton);

        getConfigButton = new QPushButton(tab_2);
        getConfigButton->setObjectName(QStringLiteral("getConfigButton"));

        horizontalLayout_2->addWidget(getConfigButton);

        removeButton = new QPushButton(tab_2);
        removeButton->setObjectName(QStringLiteral("removeButton"));

        horizontalLayout_2->addWidget(removeButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, -1, -1, 0);
        startButton = new QPushButton(tab_2);
        startButton->setObjectName(QStringLiteral("startButton"));

        horizontalLayout_4->addWidget(startButton);

        stopButton = new QPushButton(tab_2);
        stopButton->setObjectName(QStringLiteral("stopButton"));

        horizontalLayout_4->addWidget(stopButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, -1, -1, 0);
        startAllButton = new QPushButton(tab_2);
        startAllButton->setObjectName(QStringLiteral("startAllButton"));

        horizontalLayout_5->addWidget(startAllButton);

        stopAllButton = new QPushButton(tab_2);
        stopAllButton->setObjectName(QStringLiteral("stopAllButton"));

        horizontalLayout_5->addWidget(stopAllButton);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        verticalLayout_2->addLayout(horizontalLayout_5);


        gridLayout_2->addLayout(verticalLayout_2, 0, 0, 1, 1);

        btnMNUpdateList->addTab(tab_2, QString());

        verticalLayout->addWidget(btnMNUpdateList);


        topLayout->addLayout(verticalLayout);


        retranslateUi(MasternodeManager);

        btnMNUpdateList->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MasternodeManager);
    } // setupUi

    void retranslateUi(QWidget *MasternodeManager)
    {
        MasternodeManager->setWindowTitle(QApplication::translate("MasternodeManager", "Form", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MasternodeManager", "Address", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MasternodeManager", "Rank", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MasternodeManager", "Active", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MasternodeManager", "Active Seen", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MasternodeManager", "Last Seen", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MasternodeManager", "Pubkey", nullptr));
#ifndef QT_NO_TOOLTIP
        updateMNListButton->setToolTip(QApplication::translate("MasternodeManager", "Update Masternodes List", nullptr));
#endif // QT_NO_TOOLTIP
        updateMNListButton->setText(QApplication::translate("MasternodeManager", "Update List", nullptr));
        label_2->setText(QApplication::translate("MasternodeManager", "PhantomX Node Count:", nullptr));
        countLabel->setText(QApplication::translate("MasternodeManager", "0", nullptr));
        btnMNUpdateList->setTabText(btnMNUpdateList->indexOf(tab), QApplication::translate("MasternodeManager", "PNX Network", nullptr));
        createButton->setText(QApplication::translate("MasternodeManager", "&Create...", nullptr));
        copyAddressButton->setText(QApplication::translate("MasternodeManager", "Copy &Address", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QApplication::translate("MasternodeManager", "Alias", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QApplication::translate("MasternodeManager", "IP Address", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem8->setText(QApplication::translate("MasternodeManager", "Status", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem9->setText(QApplication::translate("MasternodeManager", "PNX Collateral Address", nullptr));
        editButton->setText(QApplication::translate("MasternodeManager", "&Edit", nullptr));
        getConfigButton->setText(QApplication::translate("MasternodeManager", "&Get Config", nullptr));
        removeButton->setText(QApplication::translate("MasternodeManager", "&Remove", nullptr));
        startButton->setText(QApplication::translate("MasternodeManager", "&Start", nullptr));
        stopButton->setText(QApplication::translate("MasternodeManager", "Sto&p", nullptr));
        startAllButton->setText(QApplication::translate("MasternodeManager", "S&tart All", nullptr));
        stopAllButton->setText(QApplication::translate("MasternodeManager", "St&op All", nullptr));
        btnMNUpdateList->setTabText(btnMNUpdateList->indexOf(tab_2), QApplication::translate("MasternodeManager", "My Masternodes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MasternodeManager: public Ui_MasternodeManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MASTERNODEMANAGER_H
