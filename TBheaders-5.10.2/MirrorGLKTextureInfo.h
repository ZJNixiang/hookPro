//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GLKit/GLKTextureInfo.h>

@interface MirrorGLKTextureInfo : GLKTextureInfo
{
    _Bool _containsMipmaps;	// 33 = 0x21
    unsigned int _name;	// 36 = 0x24
    unsigned int _target;	// 40 = 0x28
    unsigned int _width;	// 44 = 0x2c
    unsigned int _height;	// 48 = 0x30
    int _alphaState;	// 52 = 0x34
    int _textureOrigin;	// 56 = 0x38
}

@property _Bool containsMipmaps; // @synthesize containsMipmaps=_containsMipmaps;
@property int textureOrigin; // @synthesize textureOrigin=_textureOrigin;
@property int alphaState; // @synthesize alphaState=_alphaState;
@property unsigned int height; // @synthesize height=_height;
@property unsigned int width; // @synthesize width=_width;
@property unsigned int target; // @synthesize target=_target;
@property unsigned int name; // @synthesize name=_name;
- (id)initWithName:(unsigned int)arg1 target:(unsigned int)arg2 width:(unsigned int)arg3 height:(unsigned int)arg4;

@end

