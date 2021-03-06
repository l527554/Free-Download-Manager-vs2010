/* THIS FILE IS AUTOGENERATED - DO NOT EDIT */

#ifndef mozilla_dom_TextEncoderBinding_h__
#define mozilla_dom_TextEncoderBinding_h__

#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingDeclarations.h"
#include "mozilla/dom/DOMJSClass.h"
#include "mozilla/dom/DOMJSProxyHandler.h"

class XPCWrappedNativeScope;
namespace mozilla {
namespace dom {

class TextEncoder;

} // namespace dom
} // namespace mozilla

namespace mozilla {
namespace dom {
namespace workers {

class TextEncoder;

} // namespace workers
} // namespace dom
} // namespace mozilla


namespace mozilla {
namespace dom {

template <>
struct PrototypeTraits<prototypes::id::TextEncoder>
{
  enum
  {
    Depth = 0
  };
  typedef mozilla::dom::TextEncoder NativeType;
};
template <>
struct PrototypeTraits<prototypes::id::TextEncoder_workers>
{
  enum
  {
    Depth = 0
  };
  typedef mozilla::dom::workers::TextEncoder NativeType;
};
template <>
struct PrototypeIDMap<mozilla::dom::TextEncoder>
{
  enum
  {
    PrototypeID = prototypes::id::TextEncoder
  };
};
template <>
struct PrototypeIDMap<mozilla::dom::workers::TextEncoder>
{
  enum
  {
    PrototypeID = prototypes::id::TextEncoder_workers
  };
};
} // namespace dom
} // namespace mozilla


namespace mozilla {
namespace dom {

struct TextEncodeOptionsWorkers {
  TextEncodeOptionsWorkers() {}
  bool Init(JSContext* cx, JSObject* scopeObj, const JS::Value& val);
  bool ToObject(JSContext* cx, JSObject* parentObject, JS::Value *vp);

  TextEncodeOptionsWorkers& AsMutable() const
  {
    return *const_cast<TextEncodeOptionsWorkers*>(this);
  }

  bool mStream;
private:
  // Disallow copy-construction
  TextEncodeOptionsWorkers(const TextEncodeOptionsWorkers&) MOZ_DELETE;
  static jsid stream_id;
};
struct TextEncodeOptionsWorkersInitializer : public TextEncodeOptionsWorkers {
  TextEncodeOptionsWorkersInitializer() {
    // Safe to pass a null context if we pass a null value
    Init(nullptr, nullptr, JS::NullValue());
  }
};

struct TextEncodeOptions : public MainThreadDictionaryBase {
  TextEncodeOptions() {}
  bool Init(JSContext* cx, JSObject* scopeObj, const JS::Value& val);
  bool ToObject(JSContext* cx, JSObject* parentObject, JS::Value *vp);

  bool Init(const nsAString& aJSON)
  {
    mozilla::Maybe<JSAutoRequest> ar;
    mozilla::Maybe<JSAutoCompartment> ac;
    jsval json = JSVAL_VOID;
    JSContext* cx = ParseJSON(aJSON, ar, ac, json);
    NS_ENSURE_TRUE(cx, false);
    return Init(cx, nullptr, json);
  }
  TextEncodeOptions& AsMutable() const
  {
    return *const_cast<TextEncodeOptions*>(this);
  }

  bool mStream;
private:
  // Disallow copy-construction
  TextEncodeOptions(const TextEncodeOptions&) MOZ_DELETE;
  static bool InitIds(JSContext* cx);
  static bool initedIds;
  static jsid stream_id;
};
struct TextEncodeOptionsInitializer : public TextEncodeOptions {
  TextEncodeOptionsInitializer() {
    // Safe to pass a null context if we pass a null value
    Init(nullptr, nullptr, JS::NullValue());
  }
};

namespace TextEncoderBinding {

  extern const NativePropertyHooks sNativePropertyHooks;

  void
  CreateInterfaceObjects(JSContext* aCx, JSObject* aGlobal, JSObject** protoAndIfaceArray);

  inline JSObject* GetProtoObject(JSContext* aCx, JSObject* aGlobal)
  {

    /* Get the interface prototype object for this class.  This will create the
       object as needed. */

    /* Make sure our global is sane.  Hopefully we can remove this sometime */
    if (!(js::GetObjectClass(aGlobal)->flags & JSCLASS_DOM_GLOBAL)) {
      return NULL;
    }
    /* Check to see whether the interface objects are already installed */
    JSObject** protoAndIfaceArray = GetProtoAndIfaceArray(aGlobal);
    JSObject* cachedObject = protoAndIfaceArray[prototypes::id::TextEncoder];
    if (!cachedObject) {
      CreateInterfaceObjects(aCx, aGlobal, protoAndIfaceArray);
      cachedObject = protoAndIfaceArray[prototypes::id::TextEncoder];
    }

    /* cachedObject might _still_ be null, but that's OK */
    return cachedObject;
  }

  inline JSObject* GetConstructorObject(JSContext* aCx, JSObject* aGlobal)
  {

    /* Get the interface object for this class.  This will create the object as
       needed. */

    /* Make sure our global is sane.  Hopefully we can remove this sometime */
    if (!(js::GetObjectClass(aGlobal)->flags & JSCLASS_DOM_GLOBAL)) {
      return NULL;
    }
    /* Check to see whether the interface objects are already installed */
    JSObject** protoAndIfaceArray = GetProtoAndIfaceArray(aGlobal);
    JSObject* cachedObject = protoAndIfaceArray[constructors::id::TextEncoder];
    if (!cachedObject) {
      CreateInterfaceObjects(aCx, aGlobal, protoAndIfaceArray);
      cachedObject = protoAndIfaceArray[constructors::id::TextEncoder];
    }

    /* cachedObject might _still_ be null, but that's OK */
    return cachedObject;
  }

  JSObject*
  DefineDOMInterface(JSContext* aCx, JSObject* aGlobal, jsid id, bool* aEnabled);

  extern DOMJSClass Class;

  JSObject*
  Wrap(JSContext* aCx, JSObject* aScope, mozilla::dom::TextEncoder* aObject, nsWrapperCache* aCache);

  template <class T>
  inline JSObject* Wrap(JSContext* aCx, JSObject* aScope, T* aObject)
  {
    return Wrap(aCx, aScope, aObject, aObject);
  }

} // namespace TextEncoderBinding



namespace TextEncoderBinding_workers {

  void
  CreateInterfaceObjects(JSContext* aCx, JSObject* aGlobal, JSObject** protoAndIfaceArray);

  inline JSObject* GetProtoObject(JSContext* aCx, JSObject* aGlobal)
  {

    /* Get the interface prototype object for this class.  This will create the
       object as needed. */

    /* Make sure our global is sane.  Hopefully we can remove this sometime */
    if (!(js::GetObjectClass(aGlobal)->flags & JSCLASS_DOM_GLOBAL)) {
      return NULL;
    }
    /* Check to see whether the interface objects are already installed */
    JSObject** protoAndIfaceArray = GetProtoAndIfaceArray(aGlobal);
    JSObject* cachedObject = protoAndIfaceArray[prototypes::id::TextEncoder_workers];
    if (!cachedObject) {
      CreateInterfaceObjects(aCx, aGlobal, protoAndIfaceArray);
      cachedObject = protoAndIfaceArray[prototypes::id::TextEncoder_workers];
    }

    /* cachedObject might _still_ be null, but that's OK */
    return cachedObject;
  }

  inline JSObject* GetConstructorObject(JSContext* aCx, JSObject* aGlobal)
  {

    /* Get the interface object for this class.  This will create the object as
       needed. */

    /* Make sure our global is sane.  Hopefully we can remove this sometime */
    if (!(js::GetObjectClass(aGlobal)->flags & JSCLASS_DOM_GLOBAL)) {
      return NULL;
    }
    /* Check to see whether the interface objects are already installed */
    JSObject** protoAndIfaceArray = GetProtoAndIfaceArray(aGlobal);
    JSObject* cachedObject = protoAndIfaceArray[constructors::id::TextEncoder_workers];
    if (!cachedObject) {
      CreateInterfaceObjects(aCx, aGlobal, protoAndIfaceArray);
      cachedObject = protoAndIfaceArray[constructors::id::TextEncoder_workers];
    }

    /* cachedObject might _still_ be null, but that's OK */
    return cachedObject;
  }

  extern DOMJSClass Class;

  JSObject*
  Wrap(JSContext* aCx, JSObject* aScope, mozilla::dom::workers::TextEncoder* aObject, nsWrapperCache* aCache);

  template <class T>
  inline JSObject* Wrap(JSContext* aCx, JSObject* aScope, T* aObject)
  {
    return Wrap(aCx, aScope, aObject, aObject);
  }

} // namespace TextEncoderBinding_workers



} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_TextEncoderBinding_h__
