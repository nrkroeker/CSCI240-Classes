//Honor Pledge: I pledge that I have neither given nor received any help on this assignment

public class Player {

  public int shotNum;
  public String score;

  Player() {
    score = "";

  }

  public void shoot() {
      shotNum = (int)(Math.random() * 100);
    if(shotNum <= 49) {
      System.out.println("\t\tHit shot!");
    }
    else if(shotNum > 49) {
      System.out.println("\t\tMissed shot!");
    }
  }

}
