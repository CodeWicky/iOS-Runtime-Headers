/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKRecordZoneID : NSObject <CKSQLiteItem, CKXPCSuitableString, ICHasDatabaseScope, NSCopying, NSSecureCoding, PQLValuable> {
    NSString * _ownerName;
    NSString * _zoneName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSString *ownerName;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *zoneName;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

+ (id)cachedRecordZoneIDWithName:(id)arg1 ownerName:(id)arg2;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3;
- (id)CKPropertiesDescription;
- (id)CKPropertiesDescriptionWithProperties:(id)arg1;
- (id)CKXPCSuitableString;
- (id)_initWithZoneName:(id)arg1 ownerName:(id)arg2;
- (id)ckShortDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSqliteRepresentation:(id)arg1;
- (id)initWithZoneName:(id)arg1 ownerName:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)ownerName;
- (id)sqliteRepresentation;
- (id)zoneName;

// Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

+ (id)newFromSqliteValue:(struct Mem { }*)arg1;

- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

- (int)databaseScope;
- (BOOL)ic_isOwnedByCurrentUser;
- (id)ic_loggingDescription;

@end
