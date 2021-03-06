/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class KeychainSyncCountryInfo, NSString;

@interface PSKeychainSyncPhoneNumber : NSObject {
    KeychainSyncCountryInfo *_countryInfo;
    NSString *_digits;
}

@property(retain) KeychainSyncCountryInfo * countryInfo;
@property(retain) NSString * digits;

+ (id)phoneNumberWithDigits:(id)arg1 countryInfo:(id)arg2;

- (id)_stringByAddingDialingPrefixToString:(id)arg1;
- (id)countryInfo;
- (void)dealloc;
- (id)digits;
- (id)formattedAndObfuscatedString;
- (id)formattedString;
- (id)formattedStringWithDialingPrefix;
- (void)setCountryInfo:(id)arg1;
- (void)setDigits:(id)arg1;

@end
