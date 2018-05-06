/********************************************************************************
** Form generated from reading UI file 'overviewpage.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERVIEWPAGE_H
#define UI_OVERVIEWPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "flowlayout.h"

QT_BEGIN_NAMESPACE

class Ui_OverviewPage
{
public:
    QVBoxLayout *topLayout;
    QLabel *labelAlerts;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    FlowLayout *horizontalLayout;
    QWidget *columnOneWidget;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLabel *labelWalletStatus;
    QSpacerItem *horizontalSpacer_2;
    QFormLayout *formLayout_2;
    QLabel *label;
    QLabel *labelBalance;
    QLabel *label_6;
    QLabel *labelStake;
    QLabel *label_3;
    QLabel *labelUnconfirmed;
    QLabel *labelImmatureText;
    QLabel *labelImmature;
    QFrame *line;
    QLabel *labelTotalText;
    QLabel *labelTotal;
    QSpacerItem *verticalSpacer;
    QFrame *frameDarksend;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_5;
    QFormLayout *formLayout;
    QLabel *label_61;
    QLabel *darksendEnabled;
    QLabel *label_7;
    QProgressBar *darksendProgress;
    QLabel *labelAnonymizedText;
    QLabel *labelAnonymized;
    QLabel *label_8;
    QLabel *labelAmountRounds;
    QLabel *label_9;
    QLabel *labelSubmittedDenom;
    QLabel *darksendStatus;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *toggleDarksend;
    QPushButton *darksendReset;
    QPushButton *darksendAuto;
    QWidget *columnTwoWidget;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_4;
    QLabel *labelTransactionsStatus;
    QSpacerItem *horizontalSpacer;
    QListView *listTransactions;

    void setupUi(QWidget *OverviewPage)
    {
        if (OverviewPage->objectName().isEmpty())
            OverviewPage->setObjectName(QStringLiteral("OverviewPage"));
        OverviewPage->resize(573, 342);
        topLayout = new QVBoxLayout(OverviewPage);
        topLayout->setObjectName(QStringLiteral("topLayout"));
        topLayout->setContentsMargins(0, 0, 0, 0);
        labelAlerts = new QLabel(OverviewPage);
        labelAlerts->setObjectName(QStringLiteral("labelAlerts"));
        labelAlerts->setVisible(false);
        labelAlerts->setStyleSheet(QLatin1String("background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, stop:0 #F0D0A0, stop:1 #F8D488);  color:#000000\n"
""));
        labelAlerts->setWordWrap(true);
        labelAlerts->setMargin(3);

        topLayout->addWidget(labelAlerts);

        scrollArea = new QScrollArea(OverviewPage);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 350, 500));
        horizontalLayout = new FlowLayout(scrollAreaWidgetContents);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        columnOneWidget = new QWidget(scrollAreaWidgetContents);
        columnOneWidget->setObjectName(QStringLiteral("columnOneWidget"));
        verticalLayout_2 = new QVBoxLayout(columnOneWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(columnOneWidget);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label_5->setFont(font);

        horizontalLayout_4->addWidget(label_5);

        labelWalletStatus = new QLabel(widget);
        labelWalletStatus->setObjectName(QStringLiteral("labelWalletStatus"));
        labelWalletStatus->setStyleSheet(QStringLiteral("QLabel { color: red; }"));
        labelWalletStatus->setText(QStringLiteral("(out of sync)"));
        labelWalletStatus->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(labelWalletStatus);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_4->addLayout(horizontalLayout_4);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_2->setHorizontalSpacing(12);
        formLayout_2->setVerticalSpacing(12);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        labelBalance = new QLabel(widget);
        labelBalance->setObjectName(QStringLiteral("labelBalance"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        labelBalance->setFont(font1);
        labelBalance->setCursor(QCursor(Qt::IBeamCursor));
        labelBalance->setText(QStringLiteral("0 BC"));
        labelBalance->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelBalance->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, labelBalance);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_6);

        labelStake = new QLabel(widget);
        labelStake->setObjectName(QStringLiteral("labelStake"));
        labelStake->setFont(font1);
        labelStake->setCursor(QCursor(Qt::IBeamCursor));
        labelStake->setText(QStringLiteral("0 BC"));
        labelStake->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelStake->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, labelStake);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_3);

        labelUnconfirmed = new QLabel(widget);
        labelUnconfirmed->setObjectName(QStringLiteral("labelUnconfirmed"));
        labelUnconfirmed->setFont(font1);
        labelUnconfirmed->setCursor(QCursor(Qt::IBeamCursor));
        labelUnconfirmed->setText(QStringLiteral("0 BC"));
        labelUnconfirmed->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelUnconfirmed->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, labelUnconfirmed);

        labelImmatureText = new QLabel(widget);
        labelImmatureText->setObjectName(QStringLiteral("labelImmatureText"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, labelImmatureText);

        labelImmature = new QLabel(widget);
        labelImmature->setObjectName(QStringLiteral("labelImmature"));
        labelImmature->setFont(font1);
        labelImmature->setText(QStringLiteral("0 BC"));
        labelImmature->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelImmature->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout_2->setWidget(3, QFormLayout::FieldRole, labelImmature);

        line = new QFrame(widget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        formLayout_2->setWidget(4, QFormLayout::SpanningRole, line);

        labelTotalText = new QLabel(widget);
        labelTotalText->setObjectName(QStringLiteral("labelTotalText"));

        formLayout_2->setWidget(5, QFormLayout::LabelRole, labelTotalText);

        labelTotal = new QLabel(widget);
        labelTotal->setObjectName(QStringLiteral("labelTotal"));
        labelTotal->setFont(font1);
        labelTotal->setCursor(QCursor(Qt::IBeamCursor));
        labelTotal->setText(QStringLiteral("0 BTC"));
        labelTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelTotal->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout_2->setWidget(5, QFormLayout::FieldRole, labelTotal);


        verticalLayout_4->addLayout(formLayout_2);


        verticalLayout_2->addWidget(widget);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addWidget(columnOneWidget);

        frameDarksend = new QFrame(scrollAreaWidgetContents);
        frameDarksend->setObjectName(QStringLiteral("frameDarksend"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frameDarksend->sizePolicy().hasHeightForWidth());
        frameDarksend->setSizePolicy(sizePolicy);
        frameDarksend->setMinimumSize(QSize(300, 261));
        frameDarksend->setStyleSheet(QStringLiteral("background:transparent;"));
        frameDarksend->setFrameShape(QFrame::StyledPanel);
        frameDarksend->setFrameShadow(QFrame::Raised);
        verticalLayoutWidget = new QWidget(frameDarksend);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 331, 261));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setHorizontalSpacing(30);
        formLayout->setVerticalSpacing(12);
        label_61 = new QLabel(verticalLayoutWidget);
        label_61->setObjectName(QStringLiteral("label_61"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_61);

        darksendEnabled = new QLabel(verticalLayoutWidget);
        darksendEnabled->setObjectName(QStringLiteral("darksendEnabled"));
        darksendEnabled->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));

        formLayout->setWidget(0, QFormLayout::FieldRole, darksendEnabled);

        label_7 = new QLabel(verticalLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_7);

        darksendProgress = new QProgressBar(verticalLayoutWidget);
        darksendProgress->setObjectName(QStringLiteral("darksendProgress"));
        darksendProgress->setMaximumSize(QSize(154, 16777215));
        darksendProgress->setStyleSheet(QStringLiteral("background:transparent;"));
        darksendProgress->setValue(0);

        formLayout->setWidget(1, QFormLayout::FieldRole, darksendProgress);

        labelAnonymizedText = new QLabel(verticalLayoutWidget);
        labelAnonymizedText->setObjectName(QStringLiteral("labelAnonymizedText"));
        labelAnonymizedText->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));

        formLayout->setWidget(2, QFormLayout::LabelRole, labelAnonymizedText);

        labelAnonymized = new QLabel(verticalLayoutWidget);
        labelAnonymized->setObjectName(QStringLiteral("labelAnonymized"));
        labelAnonymized->setFont(font1);
        labelAnonymized->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));

        formLayout->setWidget(2, QFormLayout::FieldRole, labelAnonymized);

        label_8 = new QLabel(verticalLayoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_8);

        labelAmountRounds = new QLabel(verticalLayoutWidget);
        labelAmountRounds->setObjectName(QStringLiteral("labelAmountRounds"));
        labelAmountRounds->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));

        formLayout->setWidget(3, QFormLayout::FieldRole, labelAmountRounds);

        label_9 = new QLabel(verticalLayoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_9);

        labelSubmittedDenom = new QLabel(verticalLayoutWidget);
        labelSubmittedDenom->setObjectName(QStringLiteral("labelSubmittedDenom"));
        labelSubmittedDenom->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));

        formLayout->setWidget(4, QFormLayout::FieldRole, labelSubmittedDenom);


        verticalLayout_5->addLayout(formLayout);

        darksendStatus = new QLabel(verticalLayoutWidget);
        darksendStatus->setObjectName(QStringLiteral("darksendStatus"));
        darksendStatus->setMinimumSize(QSize(288, 43));
        darksendStatus->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        darksendStatus->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        darksendStatus->setWordWrap(true);

        verticalLayout_5->addWidget(darksendStatus);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        toggleDarksend = new QPushButton(verticalLayoutWidget);
        toggleDarksend->setObjectName(QStringLiteral("toggleDarksend"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(toggleDarksend->sizePolicy().hasHeightForWidth());
        toggleDarksend->setSizePolicy(sizePolicy1);
        toggleDarksend->setStyleSheet(QStringLiteral("color: rgb(217, 0, 7);"));

        horizontalLayout_2->addWidget(toggleDarksend);

        darksendReset = new QPushButton(verticalLayoutWidget);
        darksendReset->setObjectName(QStringLiteral("darksendReset"));
        sizePolicy1.setHeightForWidth(darksendReset->sizePolicy().hasHeightForWidth());
        darksendReset->setSizePolicy(sizePolicy1);
        darksendReset->setAutoFillBackground(false);
        darksendReset->setStyleSheet(QStringLiteral("color: rgb(217, 0, 7);"));

        horizontalLayout_2->addWidget(darksendReset);

        darksendAuto = new QPushButton(verticalLayoutWidget);
        darksendAuto->setObjectName(QStringLiteral("darksendAuto"));
        sizePolicy1.setHeightForWidth(darksendAuto->sizePolicy().hasHeightForWidth());
        darksendAuto->setSizePolicy(sizePolicy1);
        darksendAuto->setStyleSheet(QStringLiteral("color: rgb(217, 0, 7);"));

        horizontalLayout_2->addWidget(darksendAuto);


        verticalLayout_5->addLayout(horizontalLayout_2);


        horizontalLayout->addWidget(frameDarksend);

        columnTwoWidget = new QWidget(scrollAreaWidgetContents);
        columnTwoWidget->setObjectName(QStringLiteral("columnTwoWidget"));
        verticalLayout_3 = new QVBoxLayout(columnTwoWidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        widget_2 = new QWidget(columnTwoWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        label_4 = new QLabel(widget_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        horizontalLayout_21->addWidget(label_4);

        labelTransactionsStatus = new QLabel(widget_2);
        labelTransactionsStatus->setObjectName(QStringLiteral("labelTransactionsStatus"));
        labelTransactionsStatus->setStyleSheet(QStringLiteral("QLabel { color: red; }"));
        labelTransactionsStatus->setText(QStringLiteral("(out of sync)"));
        labelTransactionsStatus->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_21->addWidget(labelTransactionsStatus);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_21->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_21);

        listTransactions = new QListView(widget_2);
        listTransactions->setObjectName(QStringLiteral("listTransactions"));
        listTransactions->setStyleSheet(QStringLiteral("QListView { background: transparent; }"));
        listTransactions->setFrameShape(QFrame::NoFrame);
        listTransactions->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setSelectionMode(QAbstractItemView::NoSelection);

        verticalLayout->addWidget(listTransactions);


        verticalLayout_3->addWidget(widget_2);


        horizontalLayout->addWidget(columnTwoWidget);

        scrollArea->setWidget(scrollAreaWidgetContents);

        topLayout->addWidget(scrollArea);


        retranslateUi(OverviewPage);

        QMetaObject::connectSlotsByName(OverviewPage);
    } // setupUi

    void retranslateUi(QWidget *OverviewPage)
    {
        OverviewPage->setWindowTitle(QApplication::translate("OverviewPage", "Form", nullptr));
        label_5->setText(QApplication::translate("OverviewPage", "Wallet", nullptr));
#ifndef QT_NO_TOOLTIP
        labelWalletStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the phantomx network after a connection is established, but this process has not completed yet.", nullptr));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("OverviewPage", "Spendable:", nullptr));
#ifndef QT_NO_TOOLTIP
        labelBalance->setToolTip(QApplication::translate("OverviewPage", "Your current spendable balance", nullptr));
#endif // QT_NO_TOOLTIP
        label_6->setText(QApplication::translate("OverviewPage", "Stake:", nullptr));
#ifndef QT_NO_TOOLTIP
        labelStake->setToolTip(QApplication::translate("OverviewPage", "Total of coins that was staked, and do not yet count toward the current balance", nullptr));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("OverviewPage", "Unconfirmed:", nullptr));
#ifndef QT_NO_TOOLTIP
        labelUnconfirmed->setToolTip(QApplication::translate("OverviewPage", "Total of transactions that have yet to be confirmed, and do not yet count toward the current balance", nullptr));
#endif // QT_NO_TOOLTIP
        labelImmatureText->setText(QApplication::translate("OverviewPage", "Immature:", nullptr));
#ifndef QT_NO_TOOLTIP
        labelImmature->setToolTip(QApplication::translate("OverviewPage", "Mined balance that has not yet matured", nullptr));
#endif // QT_NO_TOOLTIP
        labelTotalText->setText(QApplication::translate("OverviewPage", "Total:", nullptr));
#ifndef QT_NO_TOOLTIP
        labelTotal->setToolTip(QApplication::translate("OverviewPage", "Your current total balance", nullptr));
#endif // QT_NO_TOOLTIP
        label_61->setText(QApplication::translate("OverviewPage", "Status:", nullptr));
        darksendEnabled->setText(QApplication::translate("OverviewPage", "Enabled/Disabled", nullptr));
        label_7->setText(QApplication::translate("OverviewPage", "Completion:", nullptr));
        labelAnonymizedText->setText(QApplication::translate("OverviewPage", "Darksend Balance:", nullptr));
        labelAnonymized->setText(QApplication::translate("OverviewPage", "0 phantomx", nullptr));
        label_8->setText(QApplication::translate("OverviewPage", "Amount and Rounds:", nullptr));
        labelAmountRounds->setText(QApplication::translate("OverviewPage", "0 phantomx / 0 Rounds", nullptr));
        label_9->setText(QApplication::translate("OverviewPage", "Submitted Denom:", nullptr));
#ifndef QT_NO_STATUSTIP
        labelSubmittedDenom->setStatusTip(QApplication::translate("OverviewPage", "The denominations you submitted to the Adrenaline Node. To mix, other users must submit the exact same denominations.", nullptr));
#endif // QT_NO_STATUSTIP
        labelSubmittedDenom->setText(QApplication::translate("OverviewPage", "n/a", nullptr));
        darksendStatus->setText(QApplication::translate("OverviewPage", "(Last Message)", nullptr));
        toggleDarksend->setText(QApplication::translate("OverviewPage", "Start/Stop", nullptr));
#ifndef QT_NO_TOOLTIP
        darksendReset->setToolTip(QApplication::translate("OverviewPage", "Reset the current status of Darksend (can interrupt Darksend if it's in the process of Mixing, which can cost you money!)", nullptr));
#endif // QT_NO_TOOLTIP
        darksendReset->setText(QApplication::translate("OverviewPage", "Reset", nullptr));
#ifndef QT_NO_TOOLTIP
        darksendAuto->setToolTip(QApplication::translate("OverviewPage", "Try to manually submit a Darksend request.", nullptr));
#endif // QT_NO_TOOLTIP
        darksendAuto->setText(QApplication::translate("OverviewPage", "Try Mix", nullptr));
        label_4->setText(QApplication::translate("OverviewPage", "<b>Recent transactions</b>", nullptr));
#ifndef QT_NO_TOOLTIP
        labelTransactionsStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the phantomx network after a connection is established, but this process has not completed yet.", nullptr));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class OverviewPage: public Ui_OverviewPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERVIEWPAGE_H
