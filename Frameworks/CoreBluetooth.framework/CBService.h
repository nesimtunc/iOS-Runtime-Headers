/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@class NSArray, CBUUID, CBPeripheral;

@interface CBService : NSObject  {
    CBPeripheral *_peripheral;
    CBUUID *_UUID;
    BOOL _isPrimary;
    NSArray *_includedServices;
    NSArray *_characteristics;
}

@property(readonly) CBPeripheral * peripheral;
@property(readonly) CBUUID * UUID;
@property(readonly) BOOL isPrimary;
@property(retain) NSArray * includedServices;
@property(retain) NSArray * characteristics;


- (BOOL)isPrimary;
- (id)UUID;
- (id)characteristics;
- (void)setCharacteristics:(id)arg1;
- (id)includedServices;
- (void)setIncludedServices:(id)arg1;
- (id)peripheral;

@end
