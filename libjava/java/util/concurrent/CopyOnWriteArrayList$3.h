
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_concurrent_CopyOnWriteArrayList$3__
#define __java_util_concurrent_CopyOnWriteArrayList$3__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>


class java::util::concurrent::CopyOnWriteArrayList$3 : public ::java::lang::Object
{

public: // actually package-private
  CopyOnWriteArrayList$3(::java::util::concurrent::CopyOnWriteArrayList *, jint);
public:
  virtual void add(::java::lang::Object *);
  virtual jboolean hasNext();
  virtual jboolean hasPrevious();
  virtual ::java::lang::Object * next();
  virtual jint nextIndex();
  virtual ::java::lang::Object * previous();
  virtual jint previousIndex();
  virtual void remove();
  virtual void set(::java::lang::Object *);
public: // actually package-private
  JArray< ::java::lang::Object * > * __attribute__((aligned(__alignof__( ::java::lang::Object)))) iteratorData;
  jint currentElement;
  ::java::util::concurrent::CopyOnWriteArrayList * this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __java_util_concurrent_CopyOnWriteArrayList$3__
