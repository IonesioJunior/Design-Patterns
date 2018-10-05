/**
 * @author Ionesio Junior
 * Description : Code to show Singleton pattern behavior
 * */

import admin.AdminSingleton;

public class App {
    public static void main(String[] args){

        AdminSingleton admin = AdminSingleton.INSTANCE;
        admin.setLogin("admin");
        admin.setPassword("pass");

        System.out.println(admin.checkCredentials("admin", "pass"));

        AdminSingleton anotherAdmin = AdminSingleton.INSTANCE;
        System.out.println(anotherAdmin.checkCredentials("admin","pass"));
    }
}
