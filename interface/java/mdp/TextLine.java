/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.2
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */


public class TextLine extends MdpObject {
  private long swigCPtr;

  protected TextLine(long cPtr, boolean cMemoryOwn) {
    super(mdpJNI.TextLine_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(TextLine obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        mdpJNI.delete_TextLine(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  public TextLine() {
    this(mdpJNI.new_TextLine(), true);
  }

}
