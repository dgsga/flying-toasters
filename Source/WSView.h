#import <ScreenSaver/ScreenSaver.h>
#import <WebKit/WebKit.h>

@interface WSView : ScreenSaverView <WKNavigationDelegate>
{
	WKWebView *view;
    NSArray *items;
}
@end
