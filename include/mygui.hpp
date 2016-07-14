#ifndef MY_GUI_HPP_
#define MY_GUI_HPP_

#include <QVBoxLayout>
#include <QLabel>
#include <QtCore>
#include <QWidget>
#include <QKeyEvent>

namespace mynamespace {

  class MyGui : public QWidget {
    Q_OBJECT
  public:
    explicit MyGui(QWidget* parent=0);
    ~MyGui();
  protected:
    void keyPressEvent(QKeyEvent *event);
  signals:
    void exit();
  private:
    QVBoxLayout *m_main_layout;
    QLabel *m_intro_label;
    QLabel *m_second_label;
  };
  
} //mynamespace

#endif /*MY_GUI_HPP_*/
