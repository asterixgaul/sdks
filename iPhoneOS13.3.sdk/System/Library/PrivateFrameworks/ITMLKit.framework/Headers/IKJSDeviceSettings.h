//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <ITMLKit/IKJSDeviceSettings-Protocol.h>
#import <ITMLKit/_IKJSDeviceSettings-Protocol.h>
#import <ITMLKit/_IKJSDeviceSettingsProxy-Protocol.h>

@class IKJSRestrictions, NSString;
@protocol IKAppDeviceConfig;

@interface IKJSDeviceSettings : IKJSObject <NSObject, IKJSDeviceSettings, _IKJSDeviceSettingsProxy, _IKJSDeviceSettings>
{
    id _restrictionDidChangeToken;
    id <IKAppDeviceConfig> _deviceConfig;
}

@property(nonatomic) __weak id <IKAppDeviceConfig> deviceConfig; // @synthesize deviceConfig=_deviceConfig;
// - (void).cxx_destruct;
- (void)_restrictionsDidChangeNotification:(id)arg1;
- (id)_formatStringForVideoFormat:(NSUInteger)arg1;
@property(readonly, nonatomic) IKJSRestrictions *restrictions;
@property(readonly, nonatomic) IKJSRestrictions *Restrictions;
@property(readonly, nonatomic) CGSize screen;
@property(readonly, nonatomic) CGSize Screen;
@property(readonly, retain, nonatomic) NSString *preferredVideoPreviewFormat;
@property(readonly, retain, nonatomic) NSString *preferredVideoFormat;
@property(readonly, retain, nonatomic) NSString *storefrontCountryCode;
@property(readonly, retain, nonatomic) NSString *language;
@property(readonly, retain, nonatomic) NSString *name;
- (void)dealloc;
- (id)initWithAppContext:(id)arg1 deviceConfig:(id)arg2;
- (id)asPrivateIKJSDeviceSettings;

@end
