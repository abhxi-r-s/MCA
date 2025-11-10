package com.example.calculator;

import android.annotation.SuppressLint;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;

import androidx.activity.EdgeToEdge;
import androidx.appcompat.app.AppCompatActivity;
import androidx.core.graphics.Insets;
import androidx.core.view.ViewCompat;
import androidx.core.view.WindowInsetsCompat;

import java.util.concurrent.atomic.AtomicReference;

public class MainActivity extends AppCompatActivity {

    Button add,sub,mul,div,equal;
    TextView num1,num2,result;
    String res;

    @SuppressLint("MissingInflatedId")
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        EdgeToEdge.enable(this);
        setContentView(R.layout.activity_main);
        ViewCompat.setOnApplyWindowInsetsListener(findViewById(R.id.main), (v, insets) -> {
            Insets systemBars = insets.getInsets(WindowInsetsCompat.Type.systemBars());
            v.setPadding(systemBars.left, systemBars.top, systemBars.right, systemBars.bottom);
            return insets;
        });

        num1=findViewById(R.id.editTextText);
        num2=findViewById(R.id.editTextText2);
        result=findViewById(R.id.textView3);
        add=findViewById(R.id.button6);
        sub=findViewById(R.id.button7);
        mul=findViewById(R.id.button8);
        div=findViewById(R.id.button11);
        equal=findViewById(R.id.button9);

        add.setOnClickListener(v -> res="+");
        sub.setOnClickListener(v -> res="-");
        mul.setOnClickListener(v -> res="*");
        div.setOnClickListener(v -> res="/");



        equal.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                String first= num1.getText().toString();
                String second=num2.getText().toString();

                float a= Float.parseFloat(first);
                float b= Float.parseFloat(second);

                Float ans = 0f;
                switch (res){
                    case "+": ans=a+b;
                            result.setText("Result : "+ans);
                            break;
                    case "-": ans=a-b;
                            result.setText("Result : "+ans);
                            break;
                    case "*": ans=a*b;
                            result.setText("Result : "+ans);
                             break;
                    case "/": if(b==0){ result.setText("Division by zero is not possible");}
                              else{ ans=a/b;
                              result.setText("Result : "+ans);}
                            break;
                    default:result.setText("Select an operator");          
                }

            }
        });
    }
}