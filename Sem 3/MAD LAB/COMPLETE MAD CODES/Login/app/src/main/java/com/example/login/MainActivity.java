package com.example.login;

import android.content.Intent;
import android.widget.Toast;
import android.os.Bundle;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;

import androidx.activity.EdgeToEdge;
import androidx.appcompat.app.AppCompatActivity;
import androidx.core.graphics.Insets;
import androidx.core.view.ViewCompat;
import androidx.core.view.WindowInsetsCompat;

public class MainActivity extends AppCompatActivity {

    Button loginButton;
    EditText emailEditText,passwordEditText;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        EdgeToEdge.enable(this);
        setContentView(R.layout.activity_main);

        loginButton=findViewById(R.id.button);
        emailEditText=findViewById(R.id.editTextTextEmailAddress3);
        passwordEditText=findViewById(R.id.editTextTextPassword);

        ViewCompat.setOnApplyWindowInsetsListener(findViewById(R.id.main), (v, insets) -> {
            Insets systemBars = insets.getInsets(WindowInsetsCompat.Type.systemBars());
            v.setPadding(systemBars.left, systemBars.top, systemBars.right, systemBars.bottom);
            return insets;
        });

        //added login functionality

        loginButton.setOnClickListener(vew -> {

            String email = emailEditText.getText().toString();
            String password = passwordEditText.getText().toString();

            if(email.equals("abhi@gmail.com") && password.equals("12345"))
            {
                Toast.makeText(getApplicationContext(),"Logged in successfully",Toast.LENGTH_SHORT).show();
                Intent intent = new Intent(MainActivity.this, MainActivity2.class);
                startActivity(intent);

                finish();

            }
            else
            {
                Toast.makeText((getApplicationContext()),"Invalid credentials",Toast.LENGTH_SHORT).show();
            }
        });
    }
}