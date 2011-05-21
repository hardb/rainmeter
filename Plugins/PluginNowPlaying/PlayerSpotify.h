/*
  Copyright (C) 2011 Birunthan Mohanathas (www.poiru.net)

  This program is free software; you can redistribute it and/or
  modify it under the terms of the GNU General Public License
  as published by the Free Software Foundation; either version 2
  of the License, or (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*/

#ifndef __PLAYERSPOTIFY_H__
#define __PLAYERSPOTIFY_H__

#include "Player.h"

#define SPOTIFY_PLAYPAUSE	917504
#define SPOTIFY_NEXT		720896
#define SPOTIFY_PREV		786432
#define SPOTIFY_STOP		851968
#define SPOTIFY_MUTE		524288
#define SPOTIFY_VOLUMEDOWN	589824
#define SPOTIFY_VOLUMEUP	655360

class CPlayerSpotify : public CPlayer
{
public:
	CPlayerSpotify();
	~CPlayerSpotify();

	virtual void Play() { return PlayPause(); }
	virtual void PlayPause();
	virtual void Stop();
	virtual void Next();
	virtual void Previous();
	virtual void ClosePlayer();
	virtual void OpenPlayer();
	virtual void TogglePlayer();

	virtual void AddInstance(MEASURETYPE type);
	virtual void RemoveInstance();
	virtual void UpdateData();

private:
	bool GetWindow();

	HWND m_Window;				// Spotify window
};

#endif
