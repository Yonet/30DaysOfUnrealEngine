# Features and tasks

- [ ] Fill the board with all proper pieces.  
    - [ ] We have both black and white pieces 
    - [ ] We have models other than just a king 
- [ ] When you finish moving a piece, snap it to the nearest grid position on the board. If it's far from an obvious grid square, snap it back to where it started before you moved it. 
- [ ] If you move a piece onto a piece of the other color, remove the other piece from the board 
- [ ] After you make a move, if it isn’t a valid chess move, snap the piece back to its position prior to that 
- [ ] While you're holding a piece, highlight all valid squares on the board 
- [ ] Add in support for castling (after you move the king, automatically move the rook into the correct position) 
- [ ] Add in support/UI for promoting a pawn (after moving a pawn to the correct square, show a bunch of buttons letting you select what piece to promote to, then replace the pawn on the board) 
- [ ] Add in Azure Cognitive Services voice support for moves (e.g. “Pawn to D4”) 
- [ ] Add in naive networking (given two copies of the game open, send board data updates between the two — a good chance to use PlayFab?) 
- [ ] Add the concept of "turns" and “players”. You can only move  on your turn, and you can only move your own pieces 
- [ ] Add in a chess AI to play against the computer? 
- [ ] Add the ability to scroll through history, and go forward/backwards through a game 
- [ ] Detect if a player has won, or if stalemate has happened 
- [ ] Add support for smartphone AR (will need to figure out what controls are!) 
- [ ] Add in ASA to let multiplayer happen in the same physical space 
- [ ] Optionally replace our own networking with Lichess's server API 