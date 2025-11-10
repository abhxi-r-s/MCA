package com.example.activity_lifecycle;

import android.os.Bundle;
import android.util.Log;
import android.widget.Button;
import android.widget.TextView;

import androidx.activity.EdgeToEdge;
import androidx.appcompat.app.AppCompatActivity;
import androidx.core.graphics.Insets;
import androidx.core.view.ViewCompat;
import androidx.core.view.WindowInsetsCompat;

public class MainActivity extends AppCompatActivity {

    Button btn;
    TextView edittext;

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
        edittext=findViewById(R.id.textView2);

        Log.d("Lifecycle","OnCreate called");
        edittext.setText("Current state: Oncreate");
        btn.setOnClickListener(v -> finish());
    }
    @Override
    protected void onStart()
    {

        super.onStart();
        Log.d("Lifecycle","Current state:Onstart");
        btn.setText("Current state: Onstart");
    }
    @Override
    protected void onResume()
    {

        super.onResume();
        Log.d("Lifecycle","Current state: Onresume");
        btn.setText("Current state: Onresume");
    }
    @Override
    protected void onPause()
    {

        super.onPause();
        Log.d("Lifecycle","Current state: OnPause");
        btn.setText("Current state: Onpause");
    }


    @Override
    protected void onStop() {
        super.onStop();
        Log.d("Lifecycle", "onStop called");
        btn.setText("Current State: onStop");
    }

    @Override
    protected void onRestart() {
        super.onRestart();
        Log.d("Lifecycle", "onRestart called");
        btn.setText("Current State: onRestart");
    }

    @Override
    protected void onDestroy() {
        super.onDestroy();
        Log.d("Lifecycle", "onDestroy called");
        btn.setText("Current State: onDestroy");
    }
}