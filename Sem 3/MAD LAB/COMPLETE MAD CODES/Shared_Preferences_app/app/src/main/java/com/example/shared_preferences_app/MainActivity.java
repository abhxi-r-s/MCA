package com.example.shared_preferences_app;

import android.annotation.SuppressLint;
import android.content.Intent;
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

    Button btn;
    TextView tv1,tv2,tv3,tv4,tv5;

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
        btn=findViewById(R.id.button);
        tv1=findViewById(R.id.editTextText);
        tv2=findViewById(R.id.editTextText2);
        tv3=findViewById(R.id.editTextText4);
        tv4=findViewById(R.id.editTextText5);
        tv5=findViewById(R.id.textView2);

        SharedPreferences sp= getSharedPreferences("file1",MODE_PRIVATE);
        btn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {

                String name= tv1.getText().toString();
                String marks=tv2.getText().toString();
                String age= tv3.getText().toString();
                String place=tv4.getText().toString();

                SharedPreferences.Editor se= sp.edit();
                se.putString("Name",name);
                se.putString("Marks",marks);
                se.putString("Age",age);
                se.putString("Place",place);
                se.apply();
                tv5.setText("Data written");

                Intent intent= new Intent(MainActivity.this, MainActivity2.class);
                startActivity(intent);


            }
        });


    }
}