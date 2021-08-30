/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package demo;

/**
 *
 * @author Nguyen Vu
 */
public class DataTypeDemo {
    public static void main(String[] args) {
        int x,y = 7;
        long b = 3;
        double d = 1.2;
        float f = 1.2f;
        char traloi = 'y';
        String ten = "Vu Duy Nguyen";
        boolean gt = true;
        System.out.println(ten instanceof String); //true
        System.out.println("Gioi tinh:" + (gt?"Nam":"Nu"));
        double diem = 10;
        String tt = "Len lop:" + (diem >= 5 ? "len lop":"Luu ban");
        System.out.println(tt);
        int h = 7;
        h+=5;
        System.out.println("Ho ten\tTuoi\tdiem\n-------");
        int m = 6;
        System.out.println("Gia tri:" + (m + 2));
    }
}
