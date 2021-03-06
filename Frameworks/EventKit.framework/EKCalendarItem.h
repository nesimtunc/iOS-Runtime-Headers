/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSTimeZone, NSArray, NSString, EKCalendar, NSDate, NSURL;

@interface EKCalendarItem : EKObject  {
    int _actionsDisabledCachedValue;
}

@property(readonly) NSString * UUID;
@property(retain) EKCalendar * calendar;
@property(readonly) NSString * calendarItemIdentifier;
@property(readonly) NSString * calendarItemExternalIdentifier;
@property(copy) NSString * title;
@property(copy) NSString * location;
@property(copy) NSString * notes;
@property(copy) NSURL * URL;
@property(readonly) NSDate * lastModifiedDate;
@property(readonly) NSDate * creationDate;
@property(copy) NSTimeZone * timeZone;
@property(readonly) BOOL hasAlarms;
@property(readonly) BOOL hasRecurrenceRules;
@property(readonly) BOOL hasAttendees;
@property(readonly) BOOL hasNotes;
@property(readonly) NSArray * attendees;
@property(copy) NSArray * alarms;
@property(copy) NSArray * recurrenceRules;


- (id)action;
- (id)URL;
- (id)description;
- (id)UUID;
- (void)setPriority:(int)arg1;
- (int)priority;
- (void)setURL:(id)arg1;
- (id)calendar;
- (void)setCalendar:(id)arg1;
- (id)location;
- (id)timeZone;
- (void)setAction:(id)arg1;
- (id)title;
- (BOOL)isEditable;
- (void)setTimeZone:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setLocation:(id)arg1;
- (id)lastModifiedDate;
- (id)attachments;
- (void)setCreationDate:(id)arg1;
- (id)creationDate;
- (BOOL)isFloating;
- (void)setSharedItemModifiedTimeZone:(id)arg1;
- (id)sharedItemModifiedTimeZone;
- (void)setSharedItemModifiedDate:(id)arg1;
- (id)sharedItemModifiedDate;
- (void)setSharedItemModifiedByLastName:(id)arg1;
- (void)setSharedItemModifiedByFirstName:(id)arg1;
- (void)setSharedItemModifiedByEmailAddress:(id)arg1;
- (id)sharedItemModifiedByEmailAddress;
- (void)setSharedItemModifiedByDisplayName:(id)arg1;
- (id)sharedItemModifiedByDisplayName;
- (void)setSharedItemCreatedTimeZone:(id)arg1;
- (id)sharedItemCreatedTimeZone;
- (void)setSharedItemCreatedDate:(id)arg1;
- (id)sharedItemCreatedDate;
- (void)setSharedItemCreatedByLastName:(id)arg1;
- (void)setSharedItemCreatedByFirstName:(id)arg1;
- (void)setSharedItemCreatedByAddress:(id)arg1;
- (id)sharedItemCreatedByEmailAddress;
- (void)setSharedItemCreatedByDisplayName:(id)arg1;
- (id)sharedItemCreatedByDisplayName;
- (void)removeAttendee:(id)arg1;
- (void)setAttendees:(id)arg1;
- (void)setAlarms:(id)arg1;
- (BOOL)hasAlarms;
- (BOOL)actionsDisabled;
- (void)setDefaultAlarmRemoved:(BOOL)arg1;
- (BOOL)isDefaultAlarmRemoved;
- (void)setLastModifiedDate:(id)arg1;
- (void)setNotes:(id)arg1;
- (id)calendarItemExternalIdentifier;
- (void)_moveToCalendarInternal:(id)arg1;
- (id)_attachmentsRelation;
- (id)sharedItemModifiedByLastName;
- (id)sharedItemModifiedByFirstName;
- (id)sharedItemCreatedByLastName;
- (id)sharedItemCreatedByFirstName;
- (id)_organizerRelation;
- (int)selfParticipantStatus;
- (id)_selfAttendeeRelation;
- (id)_attendeesRelation;
- (id)_recurrencesRelation;
- (id)_alarmsRelation;
- (BOOL)isSelfOrganized;
- (BOOL)isOrganizedBySharedCalendarOwner;
- (BOOL)hasNotes;
- (id)notes;
- (id)calendarItemIdentifier;
- (id)_persistentItem;
- (void)setStructuredLocation:(id)arg1;
- (id)_locationRelation;
- (void)removeAlarm:(id)arg1;
- (void)addRecurrenceRule:(id)arg1;
- (void)addAttendee:(id)arg1;
- (void)setOrganizer:(id)arg1;
- (void)addAlarm:(id)arg1;
- (void)rebase;
- (id)structuredLocation;
- (void)removeRecurrenceRule:(id)arg1;
- (void)updatePersistentObjectSkippingProperties:(id)arg1;
- (void)moveToCalendar:(id)arg1;
- (BOOL)allowsRecurrenceModifications;
- (BOOL)allowsAttendeeModifications;
- (BOOL)hasAttendees;
- (BOOL)allowsAlarmModifications;
- (BOOL)requiresDetach;
- (BOOL)allowsCalendarModifications;
- (BOOL)isSelfOrganizedInvitation;
- (BOOL)canMoveToCalendar:(id)arg1 fromCalendar:(id)arg2 error:(id*)arg3;
- (BOOL)isExternallyOrganizedInvitation;
- (void)setRecurrenceRules:(id)arg1;
- (id)recurrenceRules;
- (BOOL)hasRecurrenceRules;
- (id)alarms;
- (id)organizer;
- (id)attendees;
- (id)originalItem;
- (id)selfAttendee;
- (void)setAllDay:(BOOL)arg1;
- (id)lazyLoadRelationForKey:(id)arg1;
- (id)externalURI;
- (void)updatePersistentObject;
- (BOOL)validate:(id*)arg1;
- (BOOL)isAllDay;

@end
