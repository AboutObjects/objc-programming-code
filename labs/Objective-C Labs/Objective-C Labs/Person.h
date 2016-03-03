#import <Foundation/Foundation.h>

@interface Person : NSObject
{
    NSString *_firstName;
    NSString *_lastName;
    int _age;
}

- (NSString *)firstName;
- (void)setFirstName:(NSString *)newValue;

- (NSString *)lastName;
- (void)setLastName:(NSString *)newValue;

- (int)age;
- (void)setAge:(int)newValue;

//// Part 2
- initWithFirstName:(NSString *)firstName
           lastName:(NSString *)lastName
                age:(int)age;

- (NSString *)fullName;

////

//// Part 3
+ (instancetype)personWithFirstName:(NSString *)firstName
                           lastName:(NSString *)lastName
                                age:(int)age;
- (void)display;
////

@end


//// Part 4
@interface Person ()
{
    NSUInteger _favoritesRanking;
}

- (NSUInteger)favoritesRanking;
- (void)setFavoritesRanking:(NSUInteger)newValue;

- (NSString *)favoritesRankingStars;

@end
////

