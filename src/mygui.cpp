#include <iostream>
#include <QFont>
#include "mygui.hpp"
#include "keyvalues.hpp"

namespace mynamespace {

  MyGui::MyGui(QWidget* parent): QWidget(parent){
    resize(600,300);
    setStyleSheet("background-color: grey;");
    m_main_layout = new QVBoxLayout;

    m_intro_label = new QLabel("Color game!");
    m_intro_label->setWordWrap(true);
    m_intro_label->setFont(QFont("Open Sans", 36));
    m_intro_label->setAlignment(Qt::AlignHCenter);
    m_intro_label->setStyleSheet("border: 4px solid blue; color: white");

    m_second_label = new QLabel("Press key arrows to change colors to both labels!");
    m_second_label->setFont(QFont("Open Sans", 26));
    m_second_label->setWordWrap(true);
    m_second_label->setAlignment(Qt::AlignHCenter);
    m_second_label->setStyleSheet("border: 4px solid blue; color: white");
    
    m_main_layout->addWidget(m_intro_label);
    m_main_layout->addWidget(m_second_label);

    setLayout(m_main_layout);
    show();
  }
  MyGui::~MyGui()
  {
  }

  void MyGui::keyPressEvent(QKeyEvent *event) {
    if (event->key() == UP) {
      m_intro_label->setStyleSheet("border: 4px solid blue; color: white;");
    } else if (event->key() == DOWN) {
      m_intro_label->setStyleSheet("border: 4px solid red; color: white;");
    } else if (event->key() == LEFT) {
      m_second_label->setStyleSheet("border: 4px solid orange; color: white;");
    } else if (event->key() == RIGHT) {
      m_second_label->setStyleSheet("border: 4px solid green; color: white;");
    } else {
      emit exit();
    }
  }
  
} //mynamespace
