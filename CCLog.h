//
//  CCLog.h
//
//  Created by Gustavo Grana on 3/12/12.
//

#ifdef DEBUG
#   define DLog(FORMAT, ...) printf("%s\n",[[NSString stringWithFormat:(@"%s [Line %d] " FORMAT), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__] UTF8String]);
#else
#   define DLog(...)
#endif

#ifdef DEBUG
#   define DLogCGRect(...) printf("%s\n",[[NSString stringWithFormat:@"%s [Line %d] x: %f - y: %f - width: %f - height: %f", __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__.origin.x, ##__VA_ARGS__.origin.y, ##__VA_ARGS__.size.width, ##__VA_ARGS__.size.height] UTF8String]);
#else
#   define DLogCGRect(...)
#endif

#ifdef DEBUG
#   define DLogCGPoing(...) printf("%s\n",[[NSString stringWithFormat:@"%s [Line %d] x: %f - y: %f", __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__.x, ##__VA_ARGS__.y] UTF8String]);
#else
#   define DLogCGPoing(...)
#endif

#define ALog(FORMAT, ...) printf("%s\n",[[NSString stringWithFormat:(@"%s [Line %d] " FORMAT), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__] UTF8String]);

#ifdef DEBUG
#   define ULog(FORMAT, ...)  { UIAlertView *alert = [[UIAlertView alloc] initWithTitle:[NSString stringWithFormat:@"%s\n [Line %d] ", __PRETTY_FUNCTION__, __LINE__] message:[NSString stringWithFormat:(@"" FORMAT), ##__VA_ARGS__]  delegate:nil cancelButtonTitle:@"Ok" otherButtonTitles:nil]; [alert show]; }
#else
#   define ULog(...)
#endif
