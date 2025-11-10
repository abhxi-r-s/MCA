package com.example.quiz;

import android.content.Intent;
import android.content.SharedPreferences;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.RadioButton;
import android.widget.RadioGroup;

import androidx.activity.EdgeToEdge;
import androidx.annotation.NonNull;
import androidx.appcompat.app.AppCompatActivity;
import androidx.core.graphics.Insets;
import androidx.core.view.ViewCompat;
import androidx.core.view.WindowInsetsCompat;

public class MainActivity2 extends AppCompatActivity {

    Button btn;
    RadioGroup rg,rg2;
    RadioButton ans1,ans2,ans3,ans4;
    Integer Score=0;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        EdgeToEdge.enable(this);
        setContentView(R.layout.activity_main2);
        ViewCompat.setOnApplyWindowInsetsListener(findViewById(R.id.main), (v, insets) -> {
            Insets systemBars = insets.getInsets(WindowInsetsCompat.Type.systemBars());
            v.setPadding(systemBars.left, systemBars.top, systemBars.right, systemBars.bottom);
            return insets;
        });
        btn=findViewById(R.id.button2);
        rg=findViewById(R.id.radioGroup);
        rg2=findViewById(R.id.radioGroup2);
        ans1=findViewById(R.id.radioButton3);
        ans2=findViewById(R.id.radioButton4);
        ans3=findViewById(R.id.radioButton5);
        ans4=findViewById(R.id.radioButton6);

        rg.setOnCheckedChangeListener(new RadioGroup.OnCheckedChangeListener() {
            @Override
            public void onCheckedChanged(@NonNull RadioGroup group, int checkedId) {
                if(ans1.isChecked())
                {
                    Score+=5;
                }
            }
        });
        rg2.setOnCheckedChangeListener(new RadioGroup.OnCheckedChangeListener() {
            @Override
            public void onCheckedChanged(@NonNull RadioGroup group, int checkedId) {
                if(ans3.isChecked())
                {
                    Score+=5;
                }
            }
        });
        SharedPreferences sp= getSharedPreferences("ScoreCard",MODE_PRIVATE);
        btn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                SharedPreferences.Editor se=sp.edit();
                se.putString("Score",String.valueOf(Score));
                se.apply();
                Intent intent2= new Intent(MainActivity2.this, MainActivity3.class);
                startActivity(intent2);

                finish();
            }
        });

    }
}