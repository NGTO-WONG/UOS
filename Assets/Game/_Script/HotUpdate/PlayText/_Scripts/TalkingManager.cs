using System;
using GraphSpace;
using PlayTextSupport;
using UnityEngine;
using UnityEngine.UI;

/// <summary>
/// Here is a sample to demonstrate how to communicate with PlayText.
/// </summary>
public class TalkingManager : MonoBehaviour
{
    [SerializeField] private Button playButton;
    public DialogueGraph Graph;

    private void Start()
    {
        EventCenter.GetInstance().AddEventListener<DialogueGraph>("PlayGraph",(grpah) =>
        {
            Graph = grpah;
            EventCenter.GetInstance().EventTriggered("PlayText.Play",Graph);
        });
        
        
        playButton.onClick.AddListener(() =>
        {
            EventCenter.GetInstance().EventTriggered("PlayText.Play",Graph);
        });
    }

    private void Update()
    {
        return;
      // if(Input.GetKeyDown(KeyCode.E))
      // {
      //     EventCenter.GetInstance().EventTriggered("PlayText.Play");
      // }

      // if (Input.GetKeyDown(KeyCode.W) || Input.GetKeyDown(KeyCode.UpArrow))
      // {
      //     EventCenter.GetInstance().EventTriggered("PlayText.OptionUp");
      // }
      // else if (Input.GetKeyDown(KeyCode.S) || Input.GetKeyDown(KeyCode.DownArrow))
      // {
      //     EventCenter.GetInstance().EventTriggered("PlayText.OptionDown");
      // }

      // if(Input.GetKeyDown(KeyCode.P))
      // {
      //     EventCenter.GetInstance().EventTriggered("PlayText.Stop");
      // }
    }
}
