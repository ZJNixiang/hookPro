//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAttributedString, UIColor;

@interface MDEmojiLabelHeightUtil : NSObject
{
    long long _numberOfLines;
    NSAttributedString *_attributedText;
    NSAttributedString *_renderedAttributedText;
    UIColor *_color;
    struct __CTFramesetter *_framesetter;
    struct UIEdgeInsets _textInsets;
}

@property(nonatomic) struct __CTFramesetter *framesetter; // @synthesize framesetter=_framesetter;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(copy, nonatomic) NSAttributedString *renderedAttributedText; // @synthesize renderedAttributedText=_renderedAttributedText;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property(nonatomic) long long numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(nonatomic) struct UIEdgeInsets textInsets; // @synthesize textInsets=_textInsets;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)preferredSizeWithMaxWidth:(double)arg1;
- (void)dealloc;
- (id)init;

@end
