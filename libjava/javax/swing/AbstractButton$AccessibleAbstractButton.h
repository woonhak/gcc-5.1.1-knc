
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_AbstractButton$AccessibleAbstractButton__
#define __javax_swing_AbstractButton$AccessibleAbstractButton__

#pragma interface

#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class Point;
        class Rectangle;
    }
  }
  namespace javax
  {
    namespace accessibility
    {
        class AccessibleAction;
        class AccessibleIcon;
        class AccessibleRelationSet;
        class AccessibleStateSet;
        class AccessibleText;
        class AccessibleValue;
    }
    namespace swing
    {
        class AbstractButton;
        class AbstractButton$AccessibleAbstractButton;
      namespace text
      {
          class AttributeSet;
      }
    }
  }
}

class javax::swing::AbstractButton$AccessibleAbstractButton : public ::javax::swing::JComponent$AccessibleJComponent
{

public: // actually protected
  AbstractButton$AccessibleAbstractButton(::javax::swing::AbstractButton *);
public:
  virtual ::javax::accessibility::AccessibleStateSet * getAccessibleStateSet();
  virtual ::java::lang::String * getAccessibleName();
  virtual JArray< ::javax::accessibility::AccessibleIcon * > * getAccessibleIcon();
  virtual ::javax::accessibility::AccessibleRelationSet * getAccessibleRelationSet();
  virtual ::javax::accessibility::AccessibleAction * getAccessibleAction();
  virtual ::javax::accessibility::AccessibleValue * getAccessibleValue();
  virtual jint getAccessibleActionCount();
  virtual ::java::lang::String * getAccessibleActionDescription(jint);
  virtual jboolean doAccessibleAction(jint);
  virtual ::java::lang::Number * getCurrentAccessibleValue();
  virtual jboolean setCurrentAccessibleValue(::java::lang::Number *);
  virtual ::java::lang::Number * getMinimumAccessibleValue();
  virtual ::java::lang::Number * getMaximumAccessibleValue();
  virtual ::javax::accessibility::AccessibleText * getAccessibleText();
  virtual jint getIndexAtPoint(::java::awt::Point *);
  virtual ::java::awt::Rectangle * getCharacterBounds(jint);
  virtual jint getCharCount();
  virtual jint getCaretPosition();
  virtual ::java::lang::String * getAtIndex(jint, jint);
  virtual ::java::lang::String * getAfterIndex(jint, jint);
  virtual ::java::lang::String * getBeforeIndex(jint, jint);
  virtual ::javax::swing::text::AttributeSet * getCharacterAttribute(jint);
  virtual jint getSelectionStart();
  virtual jint getSelectionEnd();
  virtual ::java::lang::String * getSelectedText();
private:
  static const jlong serialVersionUID = -5673062525319836790LL;
public: // actually package-private
  ::javax::swing::AbstractButton * __attribute__((aligned(__alignof__( ::javax::swing::JComponent$AccessibleJComponent)))) this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_AbstractButton$AccessibleAbstractButton__
