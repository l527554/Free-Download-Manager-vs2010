/* THIS FILE IS AUTOGENERATED - DO NOT EDIT */
#ifndef _mozilla_a11y_generated_AccEvents_h_
#define _mozilla_a11y_generated_AccEvents_h_

#include "nscore.h"
#include "nsCOMPtr.h"
#include "nsCycleCollectionParticipant.h"
#include "nsString.h"
#include "nsIAccessibleEvent.h"
#include "nsIAccessibleStateChangeEvent.h"
#include "nsIAccessibleTextChangeEvent.h"
#include "nsIAccessibleHideEvent.h"
#include "nsIAccessibleCaretMoveEvent.h"
#include "nsIAccessibleTableChangeEvent.h"
#include "nsIAccessibleVirtualCursorChangeEvent.h"

class xpcAccEvent MOZ_FINAL : public nsIAccessibleEvent
{
public:
  xpcAccEvent(uint32_t  aEventType, nsIAccessible * aAccessible, nsIAccessibleDocument * aAccessibleDocument, nsIDOMNode * aDOMNode, bool  aIsFromUserInput) :
  mEventType(aEventType), mAccessible(aAccessible), mAccessibleDocument(aAccessibleDocument), mDOMNode(aDOMNode), mIsFromUserInput(aIsFromUserInput)
  {}
  ~xpcAccEvent() {}

  NS_DECL_CYCLE_COLLECTING_ISUPPORTS
  NS_DECL_CYCLE_COLLECTION_CLASS(xpcAccEvent)
  NS_DECL_NSIACCESSIBLEEVENT
private:
  uint32_t mEventType;
  nsCOMPtr<nsIAccessible> mAccessible;
  nsCOMPtr<nsIAccessibleDocument> mAccessibleDocument;
  nsCOMPtr<nsIDOMNode> mDOMNode;
  bool mIsFromUserInput;
};


class xpcAccStateChangeEvent MOZ_FINAL : public nsIAccessibleStateChangeEvent
{
public:
  xpcAccStateChangeEvent(uint32_t  aEventType, nsIAccessible * aAccessible, nsIAccessibleDocument * aAccessibleDocument, nsIDOMNode * aDOMNode, bool  aIsFromUserInput, uint32_t  aState, bool  aIsExtraState, bool  aIsEnabled) :
  mEventType(aEventType), mAccessible(aAccessible), mAccessibleDocument(aAccessibleDocument), mDOMNode(aDOMNode), mIsFromUserInput(aIsFromUserInput), mState(aState), mIsExtraState(aIsExtraState), mIsEnabled(aIsEnabled)
  {}
  ~xpcAccStateChangeEvent() {}

  NS_DECL_CYCLE_COLLECTING_ISUPPORTS
  NS_DECL_CYCLE_COLLECTION_CLASS(xpcAccStateChangeEvent)
  NS_DECL_NSIACCESSIBLEEVENT
  NS_DECL_NSIACCESSIBLESTATECHANGEEVENT
private:
  uint32_t mEventType;
  nsCOMPtr<nsIAccessible> mAccessible;
  nsCOMPtr<nsIAccessibleDocument> mAccessibleDocument;
  nsCOMPtr<nsIDOMNode> mDOMNode;
  bool mIsFromUserInput;
  uint32_t mState;
  bool mIsExtraState;
  bool mIsEnabled;
};


class xpcAccTextChangeEvent MOZ_FINAL : public nsIAccessibleTextChangeEvent
{
public:
  xpcAccTextChangeEvent(uint32_t  aEventType, nsIAccessible * aAccessible, nsIAccessibleDocument * aAccessibleDocument, nsIDOMNode * aDOMNode, bool  aIsFromUserInput, int32_t  aStart, uint32_t  aLength, bool  aIsInserted, const nsAString &  aModifiedText) :
  mEventType(aEventType), mAccessible(aAccessible), mAccessibleDocument(aAccessibleDocument), mDOMNode(aDOMNode), mIsFromUserInput(aIsFromUserInput), mStart(aStart), mLength(aLength), mIsInserted(aIsInserted), mModifiedText(aModifiedText)
  {}
  ~xpcAccTextChangeEvent() {}

  NS_DECL_CYCLE_COLLECTING_ISUPPORTS
  NS_DECL_CYCLE_COLLECTION_CLASS(xpcAccTextChangeEvent)
  NS_DECL_NSIACCESSIBLEEVENT
  NS_DECL_NSIACCESSIBLETEXTCHANGEEVENT
private:
  uint32_t mEventType;
  nsCOMPtr<nsIAccessible> mAccessible;
  nsCOMPtr<nsIAccessibleDocument> mAccessibleDocument;
  nsCOMPtr<nsIDOMNode> mDOMNode;
  bool mIsFromUserInput;
  int32_t mStart;
  uint32_t mLength;
  bool mIsInserted;
  nsString mModifiedText;
};


class xpcAccHideEvent MOZ_FINAL : public nsIAccessibleHideEvent
{
public:
  xpcAccHideEvent(uint32_t  aEventType, nsIAccessible * aAccessible, nsIAccessibleDocument * aAccessibleDocument, nsIDOMNode * aDOMNode, bool  aIsFromUserInput, nsIAccessible * aTargetParent, nsIAccessible * aTargetNextSibling, nsIAccessible * aTargetPrevSibling) :
  mEventType(aEventType), mAccessible(aAccessible), mAccessibleDocument(aAccessibleDocument), mDOMNode(aDOMNode), mIsFromUserInput(aIsFromUserInput), mTargetParent(aTargetParent), mTargetNextSibling(aTargetNextSibling), mTargetPrevSibling(aTargetPrevSibling)
  {}
  ~xpcAccHideEvent() {}

  NS_DECL_CYCLE_COLLECTING_ISUPPORTS
  NS_DECL_CYCLE_COLLECTION_CLASS(xpcAccHideEvent)
  NS_DECL_NSIACCESSIBLEEVENT
  NS_DECL_NSIACCESSIBLEHIDEEVENT
private:
  uint32_t mEventType;
  nsCOMPtr<nsIAccessible> mAccessible;
  nsCOMPtr<nsIAccessibleDocument> mAccessibleDocument;
  nsCOMPtr<nsIDOMNode> mDOMNode;
  bool mIsFromUserInput;
  nsCOMPtr<nsIAccessible> mTargetParent;
  nsCOMPtr<nsIAccessible> mTargetNextSibling;
  nsCOMPtr<nsIAccessible> mTargetPrevSibling;
};


class xpcAccCaretMoveEvent MOZ_FINAL : public nsIAccessibleCaretMoveEvent
{
public:
  xpcAccCaretMoveEvent(uint32_t  aEventType, nsIAccessible * aAccessible, nsIAccessibleDocument * aAccessibleDocument, nsIDOMNode * aDOMNode, bool  aIsFromUserInput, int32_t  aCaretOffset) :
  mEventType(aEventType), mAccessible(aAccessible), mAccessibleDocument(aAccessibleDocument), mDOMNode(aDOMNode), mIsFromUserInput(aIsFromUserInput), mCaretOffset(aCaretOffset)
  {}
  ~xpcAccCaretMoveEvent() {}

  NS_DECL_CYCLE_COLLECTING_ISUPPORTS
  NS_DECL_CYCLE_COLLECTION_CLASS(xpcAccCaretMoveEvent)
  NS_DECL_NSIACCESSIBLEEVENT
  NS_DECL_NSIACCESSIBLECARETMOVEEVENT
private:
  uint32_t mEventType;
  nsCOMPtr<nsIAccessible> mAccessible;
  nsCOMPtr<nsIAccessibleDocument> mAccessibleDocument;
  nsCOMPtr<nsIDOMNode> mDOMNode;
  bool mIsFromUserInput;
  int32_t mCaretOffset;
};


class xpcAccTableChangeEvent MOZ_FINAL : public nsIAccessibleTableChangeEvent
{
public:
  xpcAccTableChangeEvent(uint32_t  aEventType, nsIAccessible * aAccessible, nsIAccessibleDocument * aAccessibleDocument, nsIDOMNode * aDOMNode, bool  aIsFromUserInput, int32_t  aRowOrColIndex, int32_t  aRowsOrColsCount) :
  mEventType(aEventType), mAccessible(aAccessible), mAccessibleDocument(aAccessibleDocument), mDOMNode(aDOMNode), mIsFromUserInput(aIsFromUserInput), mRowOrColIndex(aRowOrColIndex), mRowsOrColsCount(aRowsOrColsCount)
  {}
  ~xpcAccTableChangeEvent() {}

  NS_DECL_CYCLE_COLLECTING_ISUPPORTS
  NS_DECL_CYCLE_COLLECTION_CLASS(xpcAccTableChangeEvent)
  NS_DECL_NSIACCESSIBLEEVENT
  NS_DECL_NSIACCESSIBLETABLECHANGEEVENT
private:
  uint32_t mEventType;
  nsCOMPtr<nsIAccessible> mAccessible;
  nsCOMPtr<nsIAccessibleDocument> mAccessibleDocument;
  nsCOMPtr<nsIDOMNode> mDOMNode;
  bool mIsFromUserInput;
  int32_t mRowOrColIndex;
  int32_t mRowsOrColsCount;
};


class xpcAccVirtualCursorChangeEvent MOZ_FINAL : public nsIAccessibleVirtualCursorChangeEvent
{
public:
  xpcAccVirtualCursorChangeEvent(uint32_t  aEventType, nsIAccessible * aAccessible, nsIAccessibleDocument * aAccessibleDocument, nsIDOMNode * aDOMNode, bool  aIsFromUserInput, nsIAccessible * aOldAccessible, int32_t  aOldStartOffset, int32_t  aOldEndOffset, int16_t  aReason) :
  mEventType(aEventType), mAccessible(aAccessible), mAccessibleDocument(aAccessibleDocument), mDOMNode(aDOMNode), mIsFromUserInput(aIsFromUserInput), mOldAccessible(aOldAccessible), mOldStartOffset(aOldStartOffset), mOldEndOffset(aOldEndOffset), mReason(aReason)
  {}
  ~xpcAccVirtualCursorChangeEvent() {}

  NS_DECL_CYCLE_COLLECTING_ISUPPORTS
  NS_DECL_CYCLE_COLLECTION_CLASS(xpcAccVirtualCursorChangeEvent)
  NS_DECL_NSIACCESSIBLEEVENT
  NS_DECL_NSIACCESSIBLEVIRTUALCURSORCHANGEEVENT
private:
  uint32_t mEventType;
  nsCOMPtr<nsIAccessible> mAccessible;
  nsCOMPtr<nsIAccessibleDocument> mAccessibleDocument;
  nsCOMPtr<nsIDOMNode> mDOMNode;
  bool mIsFromUserInput;
  nsCOMPtr<nsIAccessible> mOldAccessible;
  int32_t mOldStartOffset;
  int32_t mOldEndOffset;
  int16_t mReason;
};

#endif