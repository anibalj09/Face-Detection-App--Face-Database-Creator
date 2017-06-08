/********************************************************************************
** Form generated from reading UI file 'facedetectionapp.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FACEDETECTIONAPP_H
#define UI_FACEDETECTIONAPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FaceDetectionAppClass
{
public:
    QWidget *centralWidget;
    QStackedWidget *StackW;
    QWidget *MainMenuPage;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QPushButton *StartBtn;
    QSpacerItem *verticalSpacer_3;
    QPushButton *AboutBtn;
    QSpacerItem *verticalSpacer_4;
    QPushButton *SettingsBtn;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QWidget *AboutPage;
    QPushButton *GoBack3Btn;
    QTextBrowser *textBrowser_4;
    QWidget *PreStreamInputPage;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QPushButton *ChooseFolderBtn;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLabel *FolderPathLbl;
    QHBoxLayout *horizontalLayout_4;
    QTextBrowser *textBrowser_2;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *subjectNameLabel1;
    QCheckBox *SubjectNameCheckBox;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *GoBackBtn;
    QPushButton *NextBtn;
    QWidget *FaceDetectionPage;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_7;
    QLabel *WebcamStreamLbl;
    QHBoxLayout *CheckboxHorizontalLayout;
    QLabel *CheckBoxInstructionLbl;
    QScrollArea *CheckboxScrollArea;
    QWidget *scrollAreaWidgetContents;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_8;
    QHBoxLayout *SubjectNameHorizontalLayout;
    QLabel *subjectNameInstructionLbl;
    QLineEdit *subjectNameLabel2;
    QVBoxLayout *verticalLayout_6;
    QLabel *showFolderPathLbl;
    QLabel *showSubjectNameLbl;
    QPushButton *StartStreamBtn;
    QPushButton *DetectFacesBtn;
    QPushButton *SaveFacesBtn;
    QPushButton *SaveAllFacesTimeBtn;
    QSpacerItem *verticalSpacer_2;
    QPushButton *GoBack2Btn;
    QWidget *SettingsPage;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_6;
    QTextBrowser *textBrowser_3;
    QSpacerItem *horizontalSpacer_4;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_9;
    QRadioButton *WebcamZeroRadioBtn;
    QRadioButton *WebcamOneRadioBtn;
    QRadioButton *WebcamTwoRadioBtn;
    QRadioButton *WebcamThreeRadioBtn;
    QRadioButton *WebcamFourRadioBtn;
    QPushButton *TestWebcamBtn;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_10;
    QRadioButton *BWRadioButton;
    QRadioButton *ColorRadioButton;
    QSpacerItem *verticalSpacer_5;
    QPushButton *GoBack4Btn;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *FaceDetectionAppClass)
    {
        if (FaceDetectionAppClass->objectName().isEmpty())
            FaceDetectionAppClass->setObjectName(QStringLiteral("FaceDetectionAppClass"));
        FaceDetectionAppClass->resize(816, 591);
        centralWidget = new QWidget(FaceDetectionAppClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        StackW = new QStackedWidget(centralWidget);
        StackW->setObjectName(QStringLiteral("StackW"));
        StackW->setGeometry(QRect(10, 20, 791, 521));
        MainMenuPage = new QWidget();
        MainMenuPage->setObjectName(QStringLiteral("MainMenuPage"));
        verticalLayoutWidget = new QWidget(MainMenuPage);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(200, 0, 381, 521));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        textBrowser = new QTextBrowser(verticalLayoutWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setFrameShape(QFrame::Panel);
        textBrowser->setFrameShadow(QFrame::Raised);
        textBrowser->setLineWidth(2);

        verticalLayout->addWidget(textBrowser);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(89, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        StartBtn = new QPushButton(verticalLayoutWidget);
        StartBtn->setObjectName(QStringLiteral("StartBtn"));

        verticalLayout_2->addWidget(StartBtn);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_3);

        AboutBtn = new QPushButton(verticalLayoutWidget);
        AboutBtn->setObjectName(QStringLiteral("AboutBtn"));

        verticalLayout_2->addWidget(AboutBtn);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_4);

        SettingsBtn = new QPushButton(verticalLayoutWidget);
        SettingsBtn->setObjectName(QStringLiteral("SettingsBtn"));

        verticalLayout_2->addWidget(SettingsBtn);


        horizontalLayout_3->addLayout(verticalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(89, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        StackW->addWidget(MainMenuPage);
        AboutPage = new QWidget();
        AboutPage->setObjectName(QStringLiteral("AboutPage"));
        GoBack3Btn = new QPushButton(AboutPage);
        GoBack3Btn->setObjectName(QStringLiteral("GoBack3Btn"));
        GoBack3Btn->setGeometry(QRect(580, 440, 75, 23));
        textBrowser_4 = new QTextBrowser(AboutPage);
        textBrowser_4->setObjectName(QStringLiteral("textBrowser_4"));
        textBrowser_4->setGeometry(QRect(30, 20, 671, 421));
        StackW->addWidget(AboutPage);
        PreStreamInputPage = new QWidget();
        PreStreamInputPage->setObjectName(QStringLiteral("PreStreamInputPage"));
        verticalLayoutWidget_2 = new QWidget(PreStreamInputPage);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(190, 20, 451, 485));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setStyleSheet(QStringLiteral(""));
        label_2->setTextFormat(Qt::RichText);
        label_2->setScaledContents(false);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(verticalLayoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label_3);

        ChooseFolderBtn = new QPushButton(verticalLayoutWidget_2);
        ChooseFolderBtn->setObjectName(QStringLiteral("ChooseFolderBtn"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ChooseFolderBtn->sizePolicy().hasHeightForWidth());
        ChooseFolderBtn->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(ChooseFolderBtn);


        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(verticalLayoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);
        label_4->setBaseSize(QSize(0, 0));

        horizontalLayout_2->addWidget(label_4);

        FolderPathLbl = new QLabel(verticalLayoutWidget_2);
        FolderPathLbl->setObjectName(QStringLiteral("FolderPathLbl"));
        FolderPathLbl->setEnabled(false);
        sizePolicy.setHeightForWidth(FolderPathLbl->sizePolicy().hasHeightForWidth());
        FolderPathLbl->setSizePolicy(sizePolicy);
        FolderPathLbl->setStyleSheet(QStringLiteral("color: dimgray;"));

        horizontalLayout_2->addWidget(FolderPathLbl);


        verticalLayout_4->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(verticalLayout_4);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);
        textBrowser_2 = new QTextBrowser(verticalLayoutWidget_2);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(textBrowser_2->sizePolicy().hasHeightForWidth());
        textBrowser_2->setSizePolicy(sizePolicy3);
        textBrowser_2->setMaximumSize(QSize(16777215, 60));

        horizontalLayout_4->addWidget(textBrowser_2);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setSizeConstraint(QLayout::SetMinimumSize);
        subjectNameLabel1 = new QLineEdit(verticalLayoutWidget_2);
        subjectNameLabel1->setObjectName(QStringLiteral("subjectNameLabel1"));
        sizePolicy3.setHeightForWidth(subjectNameLabel1->sizePolicy().hasHeightForWidth());
        subjectNameLabel1->setSizePolicy(sizePolicy3);
        subjectNameLabel1->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout_5->addWidget(subjectNameLabel1);

        SubjectNameCheckBox = new QCheckBox(verticalLayoutWidget_2);
        SubjectNameCheckBox->setObjectName(QStringLiteral("SubjectNameCheckBox"));
        sizePolicy3.setHeightForWidth(SubjectNameCheckBox->sizePolicy().hasHeightForWidth());
        SubjectNameCheckBox->setSizePolicy(sizePolicy3);

        verticalLayout_5->addWidget(SubjectNameCheckBox);


        horizontalLayout_4->addLayout(verticalLayout_5);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        GoBackBtn = new QPushButton(verticalLayoutWidget_2);
        GoBackBtn->setObjectName(QStringLiteral("GoBackBtn"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(GoBackBtn->sizePolicy().hasHeightForWidth());
        GoBackBtn->setSizePolicy(sizePolicy4);

        horizontalLayout_5->addWidget(GoBackBtn);

        NextBtn = new QPushButton(verticalLayoutWidget_2);
        NextBtn->setObjectName(QStringLiteral("NextBtn"));

        horizontalLayout_5->addWidget(NextBtn);


        verticalLayout_3->addLayout(horizontalLayout_5);

        StackW->addWidget(PreStreamInputPage);
        FaceDetectionPage = new QWidget();
        FaceDetectionPage->setObjectName(QStringLiteral("FaceDetectionPage"));
        horizontalLayoutWidget_3 = new QWidget(FaceDetectionPage);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(40, 20, 701, 461));
        horizontalLayout_8 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        WebcamStreamLbl = new QLabel(horizontalLayoutWidget_3);
        WebcamStreamLbl->setObjectName(QStringLiteral("WebcamStreamLbl"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(WebcamStreamLbl->sizePolicy().hasHeightForWidth());
        WebcamStreamLbl->setSizePolicy(sizePolicy5);
        WebcamStreamLbl->setStyleSheet(QLatin1String("border: 1px solid;\n"
"boder-color: black;\n"
"background-color: black;"));
        WebcamStreamLbl->setFrameShadow(QFrame::Plain);
        WebcamStreamLbl->setScaledContents(false);

        verticalLayout_7->addWidget(WebcamStreamLbl);

        CheckboxHorizontalLayout = new QHBoxLayout();
        CheckboxHorizontalLayout->setSpacing(6);
        CheckboxHorizontalLayout->setObjectName(QStringLiteral("CheckboxHorizontalLayout"));
        CheckboxHorizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        CheckBoxInstructionLbl = new QLabel(horizontalLayoutWidget_3);
        CheckBoxInstructionLbl->setObjectName(QStringLiteral("CheckBoxInstructionLbl"));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(CheckBoxInstructionLbl->sizePolicy().hasHeightForWidth());
        CheckBoxInstructionLbl->setSizePolicy(sizePolicy6);

        CheckboxHorizontalLayout->addWidget(CheckBoxInstructionLbl);

        CheckboxScrollArea = new QScrollArea(horizontalLayoutWidget_3);
        CheckboxScrollArea->setObjectName(QStringLiteral("CheckboxScrollArea"));
        QSizePolicy sizePolicy7(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(CheckboxScrollArea->sizePolicy().hasHeightForWidth());
        CheckboxScrollArea->setSizePolicy(sizePolicy7);
        CheckboxScrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 444, 69));
        checkBox = new QCheckBox(scrollAreaWidgetContents);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(10, 10, 70, 17));
        checkBox_2 = new QCheckBox(scrollAreaWidgetContents);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(110, 10, 70, 17));
        checkBox_3 = new QCheckBox(scrollAreaWidgetContents);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setGeometry(QRect(210, 10, 70, 17));
        checkBox_4 = new QCheckBox(scrollAreaWidgetContents);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));
        checkBox_4->setGeometry(QRect(310, 10, 70, 17));
        checkBox_5 = new QCheckBox(scrollAreaWidgetContents);
        checkBox_5->setObjectName(QStringLiteral("checkBox_5"));
        checkBox_5->setGeometry(QRect(10, 50, 70, 17));
        checkBox_6 = new QCheckBox(scrollAreaWidgetContents);
        checkBox_6->setObjectName(QStringLiteral("checkBox_6"));
        checkBox_6->setGeometry(QRect(110, 50, 70, 17));
        checkBox_7 = new QCheckBox(scrollAreaWidgetContents);
        checkBox_7->setObjectName(QStringLiteral("checkBox_7"));
        checkBox_7->setGeometry(QRect(210, 50, 70, 17));
        checkBox_8 = new QCheckBox(scrollAreaWidgetContents);
        checkBox_8->setObjectName(QStringLiteral("checkBox_8"));
        checkBox_8->setGeometry(QRect(310, 50, 70, 17));
        CheckboxScrollArea->setWidget(scrollAreaWidgetContents);

        CheckboxHorizontalLayout->addWidget(CheckboxScrollArea);


        verticalLayout_7->addLayout(CheckboxHorizontalLayout);

        SubjectNameHorizontalLayout = new QHBoxLayout();
        SubjectNameHorizontalLayout->setSpacing(6);
        SubjectNameHorizontalLayout->setObjectName(QStringLiteral("SubjectNameHorizontalLayout"));
        subjectNameInstructionLbl = new QLabel(horizontalLayoutWidget_3);
        subjectNameInstructionLbl->setObjectName(QStringLiteral("subjectNameInstructionLbl"));

        SubjectNameHorizontalLayout->addWidget(subjectNameInstructionLbl);

        subjectNameLabel2 = new QLineEdit(horizontalLayoutWidget_3);
        subjectNameLabel2->setObjectName(QStringLiteral("subjectNameLabel2"));

        SubjectNameHorizontalLayout->addWidget(subjectNameLabel2);


        verticalLayout_7->addLayout(SubjectNameHorizontalLayout);


        horizontalLayout_8->addLayout(verticalLayout_7);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        showFolderPathLbl = new QLabel(horizontalLayoutWidget_3);
        showFolderPathLbl->setObjectName(QStringLiteral("showFolderPathLbl"));
        sizePolicy4.setHeightForWidth(showFolderPathLbl->sizePolicy().hasHeightForWidth());
        showFolderPathLbl->setSizePolicy(sizePolicy4);

        verticalLayout_6->addWidget(showFolderPathLbl);

        showSubjectNameLbl = new QLabel(horizontalLayoutWidget_3);
        showSubjectNameLbl->setObjectName(QStringLiteral("showSubjectNameLbl"));
        sizePolicy3.setHeightForWidth(showSubjectNameLbl->sizePolicy().hasHeightForWidth());
        showSubjectNameLbl->setSizePolicy(sizePolicy3);

        verticalLayout_6->addWidget(showSubjectNameLbl);

        StartStreamBtn = new QPushButton(horizontalLayoutWidget_3);
        StartStreamBtn->setObjectName(QStringLiteral("StartStreamBtn"));

        verticalLayout_6->addWidget(StartStreamBtn);

        DetectFacesBtn = new QPushButton(horizontalLayoutWidget_3);
        DetectFacesBtn->setObjectName(QStringLiteral("DetectFacesBtn"));

        verticalLayout_6->addWidget(DetectFacesBtn);

        SaveFacesBtn = new QPushButton(horizontalLayoutWidget_3);
        SaveFacesBtn->setObjectName(QStringLiteral("SaveFacesBtn"));

        verticalLayout_6->addWidget(SaveFacesBtn);

        SaveAllFacesTimeBtn = new QPushButton(horizontalLayoutWidget_3);
        SaveAllFacesTimeBtn->setObjectName(QStringLiteral("SaveAllFacesTimeBtn"));

        verticalLayout_6->addWidget(SaveAllFacesTimeBtn);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_6->addItem(verticalSpacer_2);

        GoBack2Btn = new QPushButton(horizontalLayoutWidget_3);
        GoBack2Btn->setObjectName(QStringLiteral("GoBack2Btn"));

        verticalLayout_6->addWidget(GoBack2Btn);


        horizontalLayout_8->addLayout(verticalLayout_6);

        StackW->addWidget(FaceDetectionPage);
        SettingsPage = new QWidget();
        SettingsPage->setObjectName(QStringLiteral("SettingsPage"));
        verticalLayoutWidget_3 = new QWidget(SettingsPage);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(140, 50, 581, 321));
        verticalLayout_8 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        textBrowser_3 = new QTextBrowser(verticalLayoutWidget_3);
        textBrowser_3->setObjectName(QStringLiteral("textBrowser_3"));
        QSizePolicy sizePolicy8(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(textBrowser_3->sizePolicy().hasHeightForWidth());
        textBrowser_3->setSizePolicy(sizePolicy8);

        horizontalLayout_6->addWidget(textBrowser_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        groupBox = new QGroupBox(verticalLayoutWidget_3);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy9(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy9);
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 171, 19));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        WebcamZeroRadioBtn = new QRadioButton(layoutWidget);
        WebcamZeroRadioBtn->setObjectName(QStringLiteral("WebcamZeroRadioBtn"));
        WebcamZeroRadioBtn->setChecked(true);

        horizontalLayout_9->addWidget(WebcamZeroRadioBtn);

        WebcamOneRadioBtn = new QRadioButton(layoutWidget);
        WebcamOneRadioBtn->setObjectName(QStringLiteral("WebcamOneRadioBtn"));
        WebcamOneRadioBtn->setChecked(false);

        horizontalLayout_9->addWidget(WebcamOneRadioBtn);

        WebcamTwoRadioBtn = new QRadioButton(layoutWidget);
        WebcamTwoRadioBtn->setObjectName(QStringLiteral("WebcamTwoRadioBtn"));

        horizontalLayout_9->addWidget(WebcamTwoRadioBtn);

        WebcamThreeRadioBtn = new QRadioButton(layoutWidget);
        WebcamThreeRadioBtn->setObjectName(QStringLiteral("WebcamThreeRadioBtn"));

        horizontalLayout_9->addWidget(WebcamThreeRadioBtn);

        WebcamFourRadioBtn = new QRadioButton(layoutWidget);
        WebcamFourRadioBtn->setObjectName(QStringLiteral("WebcamFourRadioBtn"));

        horizontalLayout_9->addWidget(WebcamFourRadioBtn);


        horizontalLayout_6->addWidget(groupBox);

        TestWebcamBtn = new QPushButton(verticalLayoutWidget_3);
        TestWebcamBtn->setObjectName(QStringLiteral("TestWebcamBtn"));

        horizontalLayout_6->addWidget(TestWebcamBtn);


        verticalLayout_8->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_5 = new QLabel(verticalLayoutWidget_3);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_7->addWidget(label_5);

        groupBox_2 = new QGroupBox(verticalLayoutWidget_3);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        sizePolicy5.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy5);
        layoutWidget1 = new QWidget(groupBox_2);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 10, 137, 19));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        BWRadioButton = new QRadioButton(layoutWidget1);
        BWRadioButton->setObjectName(QStringLiteral("BWRadioButton"));
        BWRadioButton->setChecked(true);

        horizontalLayout_10->addWidget(BWRadioButton);

        ColorRadioButton = new QRadioButton(layoutWidget1);
        ColorRadioButton->setObjectName(QStringLiteral("ColorRadioButton"));

        horizontalLayout_10->addWidget(ColorRadioButton);


        horizontalLayout_7->addWidget(groupBox_2);


        verticalLayout_8->addLayout(horizontalLayout_7);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_8->addItem(verticalSpacer_5);

        GoBack4Btn = new QPushButton(verticalLayoutWidget_3);
        GoBack4Btn->setObjectName(QStringLiteral("GoBack4Btn"));
        QSizePolicy sizePolicy10(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy10.setHorizontalStretch(0);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(GoBack4Btn->sizePolicy().hasHeightForWidth());
        GoBack4Btn->setSizePolicy(sizePolicy10);

        verticalLayout_8->addWidget(GoBack4Btn);

        StackW->addWidget(SettingsPage);
        FaceDetectionAppClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(FaceDetectionAppClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 816, 21));
        FaceDetectionAppClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(FaceDetectionAppClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        FaceDetectionAppClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(FaceDetectionAppClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        FaceDetectionAppClass->setStatusBar(statusBar);

        retranslateUi(FaceDetectionAppClass);

        StackW->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(FaceDetectionAppClass);
    } // setupUi

    void retranslateUi(QMainWindow *FaceDetectionAppClass)
    {
        FaceDetectionAppClass->setWindowTitle(QApplication::translate("FaceDetectionAppClass", "FaceDetectionApp", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("FaceDetectionAppClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:50px; margin-right:50px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:50px; margin-right:50px; -qt-block-indent:0; text-indent:0px; font-size:16pt;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:50px; margin-right:50px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt;\">Welcome to the Face Database Application!</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:50px; margin-right:50px; "
                        "-qt-block-indent:0; text-indent:0px; font-size:16pt;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:50px; margin-right:50px; -qt-block-indent:0; text-indent:0px; font-size:16pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:50px; margin-right:50px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">In this app, you can create Face Database quickly and efficiently with its face detection and CSV file management tools. Just have a webcam connected to this computer, and click &quot;Start&quot; to continue. Click &quot;About&quot; for more information about this project, and &quot;Settings&quot; to change this app's behaviour.</span></p></body></html>", Q_NULLPTR));
        StartBtn->setText(QApplication::translate("FaceDetectionAppClass", "Start", Q_NULLPTR));
        AboutBtn->setText(QApplication::translate("FaceDetectionAppClass", "About", Q_NULLPTR));
        SettingsBtn->setText(QApplication::translate("FaceDetectionAppClass", "Settings", Q_NULLPTR));
        GoBack3Btn->setText(QApplication::translate("FaceDetectionAppClass", "Go Back", Q_NULLPTR));
        textBrowser_4->setHtml(QApplication::translate("FaceDetectionAppClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">Face Detection App; Face Database Creator</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:18pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">This application is intended to help anyone who wants to build a face database make it faster by automating many steps that are normally do"
                        "ne manually. The application detects faces in the webcam stream and allows the user to save them manually.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:18pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">How to Use:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:18pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">BEFORE YOU BEGIN: Before you start, make sure you are running it on a computer with an integrated webcam, or have a webcam that can be connected to the computer. Make sure the webcam is functional before using it f"
                        "or this application.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:18pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">1.  Press the Start Button.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:18pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">2. Enter the folder directory where you want to save the images and CSV file in.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">    NOTE: The folder has to be cre"
                        "ated or has to exist before choosing it in the application.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:18pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">3. Enter the subject name for the first subject to be saved in the face database.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">    NOTE: The subject name should ONLY have letters in it. Numbers or special characters ('-','_','.', etc.) are not accepted.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:18pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; ma"
                        "rgin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">4. Click the Next button to begin.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:18pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">5. Press the '&gt;' button to start the webcam stream.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:18pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">6. When the webcam stream is running, press the 'Detect Faces' button to detect all faces in frame</span></p>\n"
"<p style=\" margin-top:0"
                        "px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">    NOTE: Only a maximum of 8 faces in a frame can be saved to the face database. The faces have to face forward, and not have artifacts that obstruct them (sunglasses, for example). Be conscious of lighting conditions: this may affect the face detection accuracy. The face detector is not 100% accurate: it may detect false positives.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:18pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">7. After the 'Detect Faces' button has been pressed, the webcam stream is stopped and all detected faces are shown on the frame by drawing a circle around them. To save the faces, check the checkbox that correspon"
                        "ds to the face and press the &quot;Save Faces&quot; button.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:18pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">8. With the faces detected, press the &quot;Save All Faces In A Time Frame&quot; to save all faces that are detected in the time frame (in seconds) that you want. </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:18pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">NOTE: The frames are not displayed so that it can work on most computers. In this version of the program, the"
                        " loading notification box is not displayed, so there won't be any indications that the faces are being saved. Wait until the time you chose passes to know it has ended (most integrated webcams have a light that turns on when the webcam is active: this light will turn on when the face detection starts, and turn off when it has ended; which can be an effective way of knowing it has ended). On tests, about one face is saved per second (if only one face is in frame).</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:18pt;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:18pt;\"><br /></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("FaceDetectionAppClass", "Enter this information before starting the face detection:", Q_NULLPTR));
        label_3->setText(QApplication::translate("FaceDetectionAppClass", "Choose folder to save face images in:", Q_NULLPTR));
        ChooseFolderBtn->setText(QApplication::translate("FaceDetectionAppClass", "Choose Folder", Q_NULLPTR));
        label_4->setText(QApplication::translate("FaceDetectionAppClass", "Path:", Q_NULLPTR));
        FolderPathLbl->setText(QString());
        textBrowser_2->setHtml(QApplication::translate("FaceDetectionAppClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Choose the name of the first subject to be entered into the database:</p></body></html>", Q_NULLPTR));
        SubjectNameCheckBox->setText(QApplication::translate("FaceDetectionAppClass", "Use this name for all subjects", Q_NULLPTR));
        GoBackBtn->setText(QApplication::translate("FaceDetectionAppClass", "Go Back", Q_NULLPTR));
        NextBtn->setText(QApplication::translate("FaceDetectionAppClass", "Next", Q_NULLPTR));
        WebcamStreamLbl->setText(QString());
        CheckBoxInstructionLbl->setText(QApplication::translate("FaceDetectionAppClass", "Choose Faces to Save:", Q_NULLPTR));
        checkBox->setText(QApplication::translate("FaceDetectionAppClass", "Face 1", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("FaceDetectionAppClass", "Face 2", Q_NULLPTR));
        checkBox_3->setText(QApplication::translate("FaceDetectionAppClass", "Face 3", Q_NULLPTR));
        checkBox_4->setText(QApplication::translate("FaceDetectionAppClass", "Face 4", Q_NULLPTR));
        checkBox_5->setText(QApplication::translate("FaceDetectionAppClass", "Face 5", Q_NULLPTR));
        checkBox_6->setText(QApplication::translate("FaceDetectionAppClass", "Face 6", Q_NULLPTR));
        checkBox_7->setText(QApplication::translate("FaceDetectionAppClass", "Face 7", Q_NULLPTR));
        checkBox_8->setText(QApplication::translate("FaceDetectionAppClass", "Face 8", Q_NULLPTR));
        subjectNameInstructionLbl->setText(QApplication::translate("FaceDetectionAppClass", "(Optional) Enter new subject name for marked images:", Q_NULLPTR));
        showFolderPathLbl->setText(QString());
        showSubjectNameLbl->setText(QString());
        StartStreamBtn->setText(QApplication::translate("FaceDetectionAppClass", ">", Q_NULLPTR));
        DetectFacesBtn->setText(QApplication::translate("FaceDetectionAppClass", "Detect Faces", Q_NULLPTR));
        SaveFacesBtn->setText(QApplication::translate("FaceDetectionAppClass", "Save Faces", Q_NULLPTR));
        SaveAllFacesTimeBtn->setText(QApplication::translate("FaceDetectionAppClass", "Save All in a Time Frame", Q_NULLPTR));
        GoBack2Btn->setText(QApplication::translate("FaceDetectionAppClass", "Go Back", Q_NULLPTR));
        textBrowser_3->setHtml(QApplication::translate("FaceDetectionAppClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">If you know the port number of the webcam, </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">choose the port number radio button:</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">(Note: laptop's integrated webcam number is 0) </p></body></html>", Q_NULLPTR));
        groupBox->setTitle(QString());
        WebcamZeroRadioBtn->setText(QApplication::translate("FaceDetectionAppClass", "0", Q_NULLPTR));
        WebcamOneRadioBtn->setText(QApplication::translate("FaceDetectionAppClass", "1", Q_NULLPTR));
        WebcamTwoRadioBtn->setText(QApplication::translate("FaceDetectionAppClass", "2", Q_NULLPTR));
        WebcamThreeRadioBtn->setText(QApplication::translate("FaceDetectionAppClass", "3", Q_NULLPTR));
        WebcamFourRadioBtn->setText(QApplication::translate("FaceDetectionAppClass", "4", Q_NULLPTR));
        TestWebcamBtn->setText(QApplication::translate("FaceDetectionAppClass", "Test Webcam", Q_NULLPTR));
        label_5->setText(QApplication::translate("FaceDetectionAppClass", "Save face images in: ", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        BWRadioButton->setText(QApplication::translate("FaceDetectionAppClass", "Black & White", Q_NULLPTR));
        ColorRadioButton->setText(QApplication::translate("FaceDetectionAppClass", "Color", Q_NULLPTR));
        GoBack4Btn->setText(QApplication::translate("FaceDetectionAppClass", "Go Back", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FaceDetectionAppClass: public Ui_FaceDetectionAppClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FACEDETECTIONAPP_H
