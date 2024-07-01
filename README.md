# Tic Tac Toe Game

This is a simple Tic Tac Toe game implemented in C++. The game supports two modes: Player vs Player and Player vs Computer.

## How to Play

### Modes
1. **Player vs Player**: Two players can play against each other.
2. **Player vs Computer**: A single player can play against the computer.

### Instructions
1. **Run the program**: Compile and run the `main.cpp` file.
2. **Select Mode**: You will be prompted to select the mode:
   - Press `1` for Player vs Player.
   - Press `2` for Player vs Computer.
3. **Gameplay**:
   - For Player vs Player, players take turns to enter their moves.
   - For Player vs Computer, the player enters their move, and the computer randomly selects a move.

### Rules
1. Players are prompted to enter the row and column numbers to place their mark (`X` for Player 1 and `O` for Player 2 or Computer).
2. The game checks for a win or a draw after each move.
3. The game ends when a player wins or the board is full, resulting in a draw.

## Compilation and Execution

To compile and run the game, follow these steps:

1. Open your terminal.
2. Navigate to the directory containing the source code file `main.cpp`.
3. Compile the program using the following command:
   ```sh
   g++ -o game TicTacToe.cpp
   ```
4. Run the compiled program:
   ```sh
   ./game
   ```

## Code Structure

1. **main.cpp**: Contains the main game logic and functions:
   - `win(char player)`: Checks if a player has won the game.
   - `bord()`: Displays the current state of the game board.
   - `computerMove()`: Handles the computer's move in Player vs Computer mode.
   - `main()`: Handles the main game loop and user input.


## License

This project is licensed under the MIT License. See the LICENSE file for details.

## Contributing

Contributions are welcome! Please open an issue or submit a pull request for any improvements or suggestions.

