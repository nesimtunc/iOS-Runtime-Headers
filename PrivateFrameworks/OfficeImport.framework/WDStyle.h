/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDCharacterProperties, WDTableStyleOverride, WDStyleSheet, WDTableCellProperties, NSString, WDTableRowProperties, WDStyle, WDParagraphProperties;

@interface WDStyle : NSObject <NSCopying> {
    WDParagraphProperties *mParagraphProperties;
    WDCharacterProperties *mCharacterProperties;
    WDTableRowProperties *mTableRowProperties;
    WDTableCellProperties *mTableCellProperties;
    WDTableStyleOverride *mTableStyleOverrides[12];
    WDStyleSheet *mStyleSheet;
    WDStyle *mBaseStyle;
    WDStyle *mNextStyle;
    BOOL mHidden;
    NSString *mName;
    NSString *mId;
    int mStyleType;
}


- (void)setName:(id)arg1;
- (id)name;
- (int)type;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (BOOL)hidden;
- (void)setHidden:(BOOL)arg1;
- (id)styleSheet;
- (id)initWithStyleSheet:(id)arg1 id:(id)arg2 type:(int)arg3;
- (id)tableCellProperties;
- (id)tableRowProperties;
- (id)tableStyleOverrideForPart:(int)arg1;
- (id)nextStyle;
- (void)setNextStyle:(id)arg1;
- (BOOL)isAnythingOverridden;
- (void)setBaseStyle:(id)arg1;
- (id)tableProperties;
- (id)characterProperties;
- (id)paragraphProperties;
- (id)id;
- (id)baseStyle;

@end
