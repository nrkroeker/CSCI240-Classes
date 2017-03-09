// Honor Pledge: I pledge that I have neither given nor received any help on this assignment
import java.util.Scanner;

public class Game {
  char repeat;
  String scoreWord = "HORSE";

    public static void main(String[] args) {
      Game game = new Game();
      game.playGame();
    }

    public void playGame() {
      do {
        // Create random seed and objects
        Player firstPlayer = new Player();
        Player secondPlayer = new Player();

        // Loop for each shot
        do {
          System.out.println("Player 1:");
          firstPlayer.shoot();

          System.out.println("Player 2:");
          secondPlayer.shoot();

          // Check if they add letter and who
          if(firstPlayer.shotNum > 4 && secondPlayer.shotNum <= 4) {
              int firstCounter = firstPlayer.score.length();
              firstPlayer.score += scoreWord.charAt(firstCounter);
              System.out.println("\tFirst player adds " + scoreWord.charAt(firstCounter));
          } else if(secondPlayer.shotNum > 4 && firstPlayer.shotNum <=4) {
              int secondCounter = secondPlayer.score.length();
              secondPlayer.score += scoreWord.charAt(secondCounter);
              System.out.println("\tSecond player adds " + scoreWord.charAt(secondCounter));
          }

        // Ends the loop when one person loses
        } while (firstPlayer.score != "HORSE" && secondPlayer.score != "HORSE");

        // Check who lost
        if(firstPlayer.score == "HORSE") {
          System.out.println("\n\nPlayer two wins!\n\n");
        }
        else if(secondPlayer.score == "HORSE") {
          System.out.println("\n\nPlayer one wins!\n\n");
        }
        else {
          System.out.println("Something broke when checking who won.");
        }

        // Repeat
        System.out.println("Would you like to play again? Y/N > ");

        // Check input format
        do {
          Scanner reader = new Scanner(System.in);
          repeat = reader.next().charAt(0);
          repeat = Character.toUpperCase(repeat);
          if(repeat != 'Y' && repeat != 'N') {
            System.out.println("Please use Y/N format >");
          }
        } while (repeat != 'Y' && repeat != 'N');
      } while (repeat == 'Y');
    }



}
