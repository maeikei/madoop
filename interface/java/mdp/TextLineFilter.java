/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.11
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */


public class TextLineFilter {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected TextLineFilter(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(TextLineFilter obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        mdpJNI.delete_TextLineFilter(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public TextLineFilter() {
    this(mdpJNI.new_TextLineFilter(), true);
  }

  public boolean empty() {
    return mdpJNI.TextLineFilter_empty(swigCPtr, this);
  }

}
