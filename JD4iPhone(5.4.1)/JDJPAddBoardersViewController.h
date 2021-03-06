//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDViewController.h"

#import "JDJPToolBarViewDelegate.h"
#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class JDJPBirthdayPicker, JDJPCertTypePicker, JDJPNameHelpView, JDJPToolBarView, NSDictionary, NSMutableArray, NSString, UIButton, UILabel, UIPickerView, UITableView, UITextField, UsedBoardersResponseModel;

@interface JDJPAddBoardersViewController : JDViewController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, UIPickerViewDelegate, UIPickerViewDataSource, JDJPToolBarViewDelegate>
{
    UITableView *boardersTable;
    UILabel *certTypeLabel;
    UILabel *birthDayLabel;
    UITextField *nameTextField;
    UITextField *certNoTextField;
    UIButton *backButton;
    JDJPCertTypePicker *certTypePicker;
    UIPickerView *ticketTypePicker;
    int offsetY;
    JDJPToolBarView *toolBarView;
    UIButton *insuHelp;
    UIButton *nameHelp;
    JDJPNameHelpView *nameHelpView;
    JDJPBirthdayPicker *birthdayPicker;
    NSDictionary *certTypeDic;
    NSDictionary *tickeTypeDic;
    NSDictionary *depDateDic;
    _Bool isEditing;
    UsedBoardersResponseModel *model;
    _Bool needShowBirth;
    NSString *ticketTypeText;
    NSString *birthdayLabelText;
    UILabel *birthTipLabel;
    UILabel *birthTipLabel2;
    NSMutableArray *boardersArr;
}

@property(retain, nonatomic) NSMutableArray *boardersArr; // @synthesize boardersArr;
@property(retain, nonatomic) NSDictionary *depDateDic; // @synthesize depDateDic;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)birthDayPickerValueChange:(id)arg1;
- (void)certPickerValueChange:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)showNameHelp;
- (_Bool)textFieldShouldClear:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)boardsAddComplete:(_Bool)arg1;
- (void)rightNavBtnClicked;
- (_Bool)checkLinkManInfo;
- (_Bool)validateIdentityCard:(id)arg1;
- (_Bool)checkChildBirthday:(int)arg1 month:(int)arg2 day:(int)arg3;
- (_Bool)checkIsADT:(int)arg1 month:(int)arg2 day:(int)arg3;
- (void)hideKeyBoard;
- (void)showCertPicker:(_Bool)arg1;
- (void)confirmPickerView;
- (void)showBackButton:(_Bool)arg1;
- (void)showBackButton:(_Bool)arg1 frame:(struct CGRect)arg2;
- (void)showBirthDayPicker:(_Bool)arg1;
- (void)showTicketTypePicker:(_Bool)arg1;
- (void)hidePickerView;
- (_Bool)chk18PaperId:(id)arg1;
- (_Bool)areaCode:(id)arg1;
- (id)getStringWithRange:(id)arg1 Value1:(long long)arg2 Value2:(long long)arg3;
- (_Bool)checkIsBoardersExist:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

