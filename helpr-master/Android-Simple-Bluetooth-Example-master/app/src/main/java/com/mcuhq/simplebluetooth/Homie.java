package com.mcuhq.simplebluetooth;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.content.Intent;

public class Homie extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_homie);
    }

    public void goToAccounts(View view){
        Intent intent = new Intent(this, Quadrantone.class);
        startActivity(intent);
    }
    public void goToDepositCheck(View view){
        Intent intent = new Intent(this, Quadranttwo.class);
        startActivity(intent);
    }
    public void goToTransfer(View view){
        Intent intent = new Intent(this, Quadrantthree.class);
        startActivity(intent);
    }
    public void goToHelp(View view){
        Intent intent = new Intent(this, Quadrantfour.class);
        startActivity(intent);
    }



}
