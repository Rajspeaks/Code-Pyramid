import javafx.application.Application;
import javafx.geometry.Pos;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.TextField;
import javafx.scene.layout.GridPane;
import javafx.scene.text.Text;
import javafx.stage.Stage;

public class LoginForm extends Application {
    public static void main(String[] args) {
        launch(args);
    }

    @Override
    public void start(Stage primaryStage) {
        // Software widget declarations
        GridPane gridPane = new GridPane();

        //label initialization
        Text t1 = new Text("Username: ");
        Text t2 = new Text("Password: ");

        //input field initialization
        TextField tf1 = new TextField();
        TextField tf2 = new TextField();

        //login button initialization
        Button b = new Button("Login");

        //Positioning the widgets
        gridPane.add(t1,0,1);
        gridPane.add(tf1,2,1);
        gridPane.add(t2,0,3);
        gridPane.add(tf2,2,3);
        gridPane.add(b,2,10);

        gridPane.setAlignment(Pos.CENTER);

        //configuring the display
        Scene scene = new Scene(gridPane,800,500);
        primaryStage.setScene(scene);
        primaryStage.setTitle("Login - Form");
        primaryStage.show();
    }
}