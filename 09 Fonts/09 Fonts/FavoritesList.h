//
//  FavoritesList.h
//  09 Fonts
//
//  Created by tomandhua on 16/6/20.
//  Copyright © 2016年 tomandhua. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FavoritesList : NSObject

+ (instancetype)sharedFavoritesList;

- (NSArray *)favorites;

- (void)addFavorite:(id)item;
- (void)removeFavorite:(id)item;
- (void)moveItemAtIndex:(NSInteger)from toIndex:(NSInteger)to;
@end
