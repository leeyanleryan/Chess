QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    chess_ai.cpp \
    chess_button.cpp \
    chess_logic.cpp \
    chess_promotion_button.cpp \
    main.cpp \
    chess.cpp

HEADERS += \
    chess.h \
    chess_ai.h \
    chess_button.h \
    chess_logic.h \
    chess_promotion_button.h

FORMS += \
    chess.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc
