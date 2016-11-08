#include "my_dialog_test.h"
#include "my_dialog.h"

/*
void my_dialog_test::close_with_alt_c()
{
  my_dialog d;
  d.show();
  QVERIFY(d.isVisible());
  QTest::keyClick(&d,Qt::Key_C,Qt::AltModifier, 100);
  QVERIFY(d.isHidden());
}

void my_dialog_test::close_with_alt_f4()
{
  my_dialog d;
  d.show();
  QVERIFY(d.isVisible());
  QTest::keyClick(&d,Qt::Key_F4,Qt::AltModifier, 100);
  QVERIFY(d.isHidden());
}
*/

void my_dialog_test::close_with_escape()
{
  my_dialog d;
  d.show();
  QVERIFY(d.isVisible());

  QTest::keyClick(&d,Qt::Key_Escape,Qt::NoModifier, 100);
  QVERIFY(d.isHidden());
}

void my_dialog_test::default_construction()
{
  my_dialog d;
  d.show();
  QVERIFY(d.isVisible());
  d.close();
  QVERIFY(d.isHidden());
}
