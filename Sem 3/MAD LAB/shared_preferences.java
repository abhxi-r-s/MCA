package com.example.savedpreferences;

import android.content.SharedPreferences;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;

import androidx.activity.EdgeToEdge;
import androidx.appcompat.app.AppCompatActivity;
import androidx.core.graphics.Insets;
import androidx.core.view.ViewCompat;
import androidx.core.view.WindowInsetsCompat;

public class MainActivity extends AppCompatActivity {

    TextView txt;
    Button br,bw;
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

        txt=findViewById(R.id.textView2);
        br=findViewById(R.id.button2);
        bw=findViewById(R.id.button);

        String username="Abhishek";
        String email="abhi@gmail.com";

        SharedPreferences sp = getSharedPreferences("sp_abc",MODE_PRIVATE);

        bw.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                SharedPreferences.Editor se= sp.edit();
                se.putString("username",username);
                se.putString("email",email);
                se.apply();
                txt.setText("Data Written");
            }
        });
        br.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                String u = sp.getString("username","");
                String y = sp.getString("email","");

                txt.setText(u+" "+ y);
            }
        });
    }
}