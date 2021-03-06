// pixel-from-image.h

# ifndef __PIXEL_IMAGE_H__
# define __PIXEL_IMAGE_H__

# include <stdlib.h>
# include <SDL/SDL.h>
# include <SDL/SDL_image.h>
# include <err.h>

Uint32 GetPixel(SDL_Surface *image, unsigned x, unsigned y);

void PutPixel(SDL_Surface *image, unsigned x, unsigned y, Uint32 pixel);

# endif
