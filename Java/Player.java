//Honor Pledge: I pledge that I have neither given nor received any help on this assignment

public class Player {

  public int shotNum;
  public String score;

  Player() {

  }

  public void shoot() {
      shotNum = (int)(Math.random() * 100);
    if(shotNum <= 4) {
      System.out.println("Hit shot!");
    }
    else if(shotNum > 4) {
      System.out.println("Missed shot!");
    }
  }

}
