package com.example.radio_checkbox_app;

import android.annotation.SuppressLint;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.RadioButton;
import android.widget.RadioGroup;
import android.widget.TextView;
import android.widget.Toast;

import androidx.activity.EdgeToEdge;
import androidx.annotation.NonNull;
import androidx.appcompat.app.AppCompatActivity;
import androidx.core.graphics.Insets;
import androidx.core.view.ViewCompat;
import androidx.core.view.WindowInsetsCompat;

public class MainActivity extends AppCompatActivity {

    Button btn;
    RadioGroup RG;
    RadioButton RB1,RB2;
    CheckBox PYTHON,C,JAVA;
    TextView result;

    @SuppressLint("MissingInflatedId")
    @Override
    protected void onCreate(Bundle savedInstanceState) {

        super.onCreate(savedInstanceState);
        EdgeToEdge.enable(this);
        setContentView(R.layout.activity_main);
//        ViewCompat.setOnApplyWindowInsetsListener(findViewById(R.id.main), (v, insets) -> {
//            Insets systemBars = insets.getInsets(WindowInsetsCompat.Type.systemBars());
//            v.setPadding(systemBars.left, systemBars.top, systemBars.right, systemBars.bottom);
//            return insets;
//        });
        btn=findViewById(R.id.button2);
        RG=findViewById(R.id.radioGroup);
        RB1=findViewById(R.id.radioButton);
        RB2=findViewById(R.id.radioButton2);
        PYTHON=findViewById(R.id.checkBox1);
        C=findViewById(R.id.checkBox2);
        JAVA=findViewById(R.id.checkBox3);
        result=findViewById(R.id.textView4);

        RG.setOnCheckedChangeListener(new RadioGroup.OnCheckedChangeListener() {
            @Override
            public void onCheckedChanged(@NonNull RadioGroup group, int checkedId) {

                String Gender;
                if(RB1.isChecked())
                {
                    Gender="Male";
                } else if (RB2.isChecked()) {
                    Gender="Female";
                }
                else{
                    Gender="Not Selected";
                }
                Toast.makeText(MainActivity.this, "Gender is "+Gender, Toast.LENGTH_SHORT).show();

            }
        });
        btn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                String languages="Languages Known : ";
                if(PYTHON.isChecked())
                {
                    languages+="Python";
                }
                if(C.isChecked())
                {
                    languages+=" C ";
                }
                if(JAVA.isChecked())
                {
                    languages+=" JAVA ";
                }
                else {
                    languages+="No Knowledge in languages";
                }
                result.setText(languages);
            }

        });


    }
}