//
//  AppDelegate.swift
//  IQUIIARDemo
//
//  Created by Claudio Barbera on 27/03/23.
//

import UIKit

@main
class AppDelegate: UIResponder, UIApplicationDelegate {
    
    var window: UIWindow?
    
    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?) -> Bool {
        UnityHelper.shared.setHostMainWindow(window)
        return true
    }
}

